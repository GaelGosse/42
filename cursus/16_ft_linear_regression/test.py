import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
import math


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
def function(x, a, b):
	return a * x + b

x = np.linspace(0, d_km_max, km_max)
y = function(x, 0, (price_max - price_min) / 2 + price_min)


# ----- ----- DISPLAY SETTINGS ----- -----
fig, ax = plt.subplots()
ax.scatter(data[x_label], data[y_label], label='cars', color='red')
ax.plot(x, y, label='correlation km & price')


# ----- ----- DISPLAY ----- -----
ax.set_xlim([d_km_min, d_km_max])
ax.set_ylim([d_price_min, d_price_max])
ax.set_xlabel(x_label)
ax.set_ylabel(y_label)
ax.set_title('')
ax.legend()
ax.grid(True)


def update(frame):
    a = np.sin(frame / 10)  # Example: change 'a' over time
    b = (price_max - price_min) / 2 + price_min
    x = np.linspace(0, d_km_max, km_max)
    y = function(x, a, b)
    line.set_data(x, y)
    return line,
ani = FuncAnimation(fig, update, frames=np.arange(0, 100), blit=True)


def on_key(event):
	if event.key == 'escape':
		plt.close(fig)
fig.canvas.mpl_connect('key_press_event', on_key)

plt.show()
