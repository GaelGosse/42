import matplotlib.pyplot as plt
import numpy as np
import pandas as pds
import math
from matplotlib.animation import FuncAnimation

BACK_RED = "\033[31;90m"
BACK_GREEN = "\033[32;90m"
BACK_YELLOW = "\033[33;90m"
BACK_BLUE = "\033[34;90m"
BACK_MAGENTA = "\033[35;90m"
BACK_CYAN = "\033[36;90m"

RED = "\033[91m"
GREEN = "\033[92m"
YELLOW = "\033[93m"
BLUE = "\033[94m"
MAGENTA = "\033[95m"
CYAN = "\033[96m"
RESET = "\033[0m"


# ----- ----- READ CSV DATA ----- -----
data = pds.read_csv('data.csv')
x_label = data.columns[0]
y_label = data.columns[1]


# ----- ----- TERMINAL GRAPH ----- -----
c0_min = math.floor(data.min()[data.columns[0]]);
c0_max = math.ceil(data.max()[data.columns[0]]);
c1_min = math.floor(data.min()[data.columns[1]]);
c1_max = math.ceil(data.max()[data.columns[1]]);


# ----- ----- NORMALISATION ----- -----
norm_data = pds.DataFrame({data.columns[0]: data[data.columns[0]], data.columns[1]: data[data.columns[1]]})
norm_data[data.columns[0]] = norm_data[data.columns[0]].apply(lambda x: x / c0_max)
norm_data[data.columns[1]] = norm_data[data.columns[1]].apply(lambda x: x / c1_max)


# ----- ----- LINEAR FUNCTION ----- -----
def fct_guess_price(x, a, b):
	print(f"main(x)= {a}\t* x + {b}")
	return a * x + b

def perpendicular(x, a, b):
	print(f"perp(x)= {a}\t* x + {b}")
	return a * x + b


# ----- ----- CREATE GRAPH ----- -----
fig, ax = plt.subplots()
sc = ax.scatter(norm_data[x_label], norm_data[y_label], label='cars', color='red')
# print(sc.get_offsets()[0][1])
middle_index = len(norm_data) // 2
middle_point = norm_data.iloc[middle_index]
ax.scatter(middle_point[x_label], middle_point[y_label], color='blue', label='middle point')

line, = ax.plot([], [], label='correlation km & price')


# ----- ----- DIST BTWEEN POINTS N FCT ----- -----
act_dist = []
prev_dist = []
def check_dist_dots(a, b):
	act_dist.clear()
	if (a == 0):
		a = 1e-10
	perp_a = -1 / a
	perp_b = 0
	for dot in sc.get_offsets():
		perp_b = dot[1] - perp_a * dot[0]	#2: find b
		# a * x + b = perp_a * x + perp_b	#3: y=y
		# a - perp_a = b - perp_b
		x = (perp_b - b) / (a - perp_a)		#3: find x of intersect
		y = perp_a * x + perp_b				#4: find y of intersect
		dist = math.sqrt(pow(x - dot[0], 2) + pow(y - dot[1], 2))
		act_dist.append(dist)


# ----- ----- GRAPH SETTINGS ----- -----
ax.set_xlim([-0.1, 1.1])
ax.set_ylim([-0.1, 1.1])

ax.set_xlabel(x_label)
ax.set_ylabel(y_label)

ax.set_title('')
ax.legend()
ax.grid(True)

def clearly(number):
	return f"{number:,}".replace(",", " ")


# ----- ----- ANIMATION ----- -----

def	mean_half_array(arr):
	if len(arr) == 0:
		return (None, None)

	mid_index = len(arr) // 2
	first_half = arr[:mid_index]
	second_half = arr[mid_index:]

	first_mean = sum(first_half) / len(first_half) if not first_half.empty else None
	second_mean = sum(second_half) / len(second_half) if not second_half.empty else None

	if first_mean is None or second_mean is None:
		return None

	print('first_mean:', first_mean);
	print('second_mean:', second_mean);
	if (first_mean > second_mean):
		return 1
	else:
		return 0

final_a = 0.01
final_b = (c1_max - c1_min) / 2 + c1_min

step = 0
param_a = -90
step_a = 1
min_a = np.sin(param_a / 1000)

final_b = mean_half_array(norm_data[data.columns[1]])
if (final_b == 1):
	step_a = -1
else:
	step_a = 1
def update(frame):
	global step, param_a, min_a, final_a, final_b, step_a
	final_a = np.sin(param_a / 1000)

	print('final_b:', final_b);
	# final_a = -0.03056
	# final_b = 9000

	prev_dist = act_dist.copy()
	check_dist_dots(final_a, final_b)
	sum_act_dist = sum(act_dist)
	sum_prev_dist = sum(prev_dist)
	if (sum_prev_dist != 0 and sum_act_dist < sum_prev_dist):
		min_a = param_a
		print(GREEN, f"sum_act_dist: {clearly(sum_act_dist)}", RESET)
	if (sum_prev_dist != 0 and sum_act_dist > sum_prev_dist):
		print(RED, f"sum_act_dist: {clearly(sum_act_dist)}", RESET)
		ani.event_source.stop()


	param_a += step_a

	print(f"n°{step}    main(x)= {final_a}\t* x + {final_b}")
	x = np.linspace(0, c0_max, c0_max)
	y = fct_guess_price(x, final_a, final_b)
	line.set_data(x, y)

	print("-----\n")
	return line,

# ani = FuncAnimation(fig, update, frames=np.arange(-90, 90), fargs=(ani,), blit=True, interval=1000, repeat=False)
ani = FuncAnimation(fig, update, frames=np.arange(-90, 90), blit=True, interval=10, repeat=True)



# ----- ----- WO/ ANIM ----- -----
# x = np.linspace(0, c0_max, c0_max)
# y = fct_guess_price(x, final_a, final_b)
# y2 = perpendicular(x, -1 / final_a, final_b)
# plt.plot(x, y, label='linear fct')
# plt.plot(x, y2, label='perp')

is_paused = False
def on_key(event):
	global is_paused
	if event.key == 'escape':
		plt.close(fig)
	elif event.key == ' ':
		if is_paused:
			ani.event_source.start()
		else:
			ani.event_source.stop()
		is_paused = not is_paused

fig.canvas.mpl_connect('key_press_event', on_key)

plt.show()



# sqrt((238283.62649751222 - 240000)^2 + (-15446.586647237185 - 3650)^2)