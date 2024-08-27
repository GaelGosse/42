import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
import math
from matplotlib.animation import FuncAnimation

# ----- ----- READ CSV DATA ----- -----
data = pd.read_csv('data.csv')
x_label = data.columns[0]
y_label = data.columns[1]


# ----- ----- TERMINAL GRAPH ----- -----
km_min = math.floor(data.min()['km'])
km_max = math.ceil(data.max()['km'])
price_min = math.floor(data.min()['price'])
price_max = math.ceil(data.max()['price'])

d_km_min = km_min
d_km_max = km_max
d_price_min = price_min
d_price_max = price_max

d_km_min -= km_max * 0.1
d_km_max += km_max * 0.1
d_price_min -= price_max * 0.1
d_price_max += price_max * 0.1


# ----- ----- LINEAR FUNCTION ----- -----
def fct_guess_price(x, a, b):
	print(f"main(x)= {a}\t* x + {b}")
	return a * x + b

def perpendicular(x, a, b):
	print(f"perp(x)= {a}\t* x + {b}")
	return a * x + b


# ----- ----- CREATE GRAPH ----- -----
fig, ax = plt.subplots()
sc = ax.scatter(data[x_label], data[y_label], label='cars', color='red')
# print(sc.get_offsets()[0][1])
line, = ax.plot([], [], label='correlation km & price')
line2, = ax.plot([], [], label='perpdclr')


# ----- ----- DIST BTWEEN POINTS N FCT ----- -----
def check_dist_dots(a, b):
	perp_a = -1 / a
	perp_b = 0
	for dot in sc.get_offsets():
		perp_b = dot[1] - perp_a * dot[0]
	print("-------")


# ----- ----- GRAPH SETTINGS ----- -----
ax.set_xlim([d_km_min, d_km_max])
ax.set_ylim([d_price_min, d_price_max])
ax.set_xlabel(x_label)
ax.set_ylabel(y_label)
ax.set_title('')
ax.legend()
ax.grid(True)


# ----- ----- ANIMATION ----- -----
final_a = 0.01
final_b = (price_max - price_min) / 2 + price_min
act_dist = []
prev_dist = []
def update(frame):
	final_a = np.sin(frame / 1000)
	final_b = (price_max - price_min) / 2 + price_min

	# final_a = -0.03056
	# final_b = 9000

	check_dist_dots(final_a, final_b)

	x = np.linspace(0, d_km_max, km_max)
	y = fct_guess_price(x, final_a, final_b)
	line.set_data(x, y)
	return line, line2

ani = FuncAnimation(fig, update, frames=np.arange(-90, 90), blit=True, interval = 10000, repeat=False)

# ----- ----- WO/ ANIM ----- -----
# x = np.linspace(0, d_km_max, km_max)
# y = fct_guess_price(x, final_a, final_b)
# y2 = perpendicular(x, -1 / final_a, final_b)
# plt.plot(x, y, label='linear fct')
# plt.plot(x, y2, label='perp')


def on_key(event):
	if event.key == 'escape':
		plt.close(fig)
fig.canvas.mpl_connect('key_press_event', on_key)

plt.show()
