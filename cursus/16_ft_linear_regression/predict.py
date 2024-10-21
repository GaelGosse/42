import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from matplotlib.animation import FuncAnimation

data = pd.read_csv('data.csv')
if (not data):
	print("something wrong with the file data.csv")
	exit(1)

x_label = data.columns[0]
y_label = data.columns[1]

x = data[x_label].values
y = data[y_label].values

x_mean = np.mean(x)
y_mean = np.mean(y)

x_std = np.std(x)
y_std = np.std(y)

x = (x - x_mean) / np.std(x)
y = (y - y_mean) / np.std(y)

a = 0.0
b = 0.0
learning_rate = 0.1
num_ite = 100

fig, ax = plt.subplots()
ax.scatter(x, y, color="red")
line, = ax.plot([], [], color="blue")

def	update(frame):
	global a, b, ani
	m = len(y)
	estimatePrice = a * x + b
	da = (1 / m) * np.sum((estimatePrice - y) * x)
	db = (1 / m) * np.sum(estimatePrice - y)
	a -= learning_rate * da
	b -= learning_rate * db

	line.set_data(x, a * x + b)
	return line,

ani = FuncAnimation(fig, update, frames=num_ite, blit=True, interval=10, repeat=False)

is_paused = False
def on_key(event):
	global is_paused
	if event.key == 'escape':
		plt.close(fig)
	# elif event.key == ' ':
	# 	if is_paused:
	# 		ani.event_source.start()
	# 	else:
	# 		ani.event_source.stop()
	# 	is_paused = not is_paused

fig.canvas.mpl_connect('key_press_event', on_key)

plt.show()

final_a = a * (y_std / x_std)
final_b = b * y_std + y_mean - final_a * x_mean

x = x * x_std + x_mean
y = y * y_std + y_mean

fig, ax = plt.subplots()
ax.scatter(x, y, color='red')
ax.plot(x, final_a * x + final_b, color="blue")
fig.canvas.mpl_connect('key_press_event', on_key)

plt.show()