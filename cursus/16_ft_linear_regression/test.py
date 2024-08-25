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


# ----- ----- FUNCTION ----- -----
def fct_guess_price(x, a, b):
	print(f"{a}\t* x + {b}")
	return a * x + b


# ----- ----- CREATE GRAPH ----- -----
fig, ax = plt.subplots()
sc = ax.scatter(data[x_label], data[y_label], label='cars', color='red')
# print(sc.get_offsets()[0][1])
line, = ax.plot([], [], label='correlation km & price')


# ----- ----- GRAPH SETTINGS ----- -----
ax.set_xlim([d_km_min, d_km_max])
ax.set_ylim([d_price_min, d_price_max])
ax.set_xlabel(x_label)
ax.set_ylabel(y_label)
ax.set_title('')
ax.legend()
ax.grid(True)


# ----- ----- ANIMATION ----- -----
final_a = 0
final_b = 0
act_dist = []
prev_dist = []
def update(frame):
	final_a = np.sin(frame / 1000)
	# print(final_a)
	final_b = (price_max - price_min) / 2 + price_min

	final_a = -0.03056
	final_b = 9000

	x = np.linspace(0, d_km_max, km_max)
	y = fct_guess_price(x, final_a, final_b)
	line.set_data(x, y)
	return line,
ani = FuncAnimation(fig, update, frames=np.arange(-30, 30), blit=True, interval = 5000, repeat=False)



def on_key(event):
	if event.key == 'escape':
		plt.close(fig)
fig.canvas.mpl_connect('key_press_event', on_key)

plt.show()
