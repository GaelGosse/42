import os
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from matplotlib.animation import FuncAnimation

HEADER = '\033[95m'
BLUE = '\033[94m'
CYAN = '\033[96m'
GREEN = '\033[92m'
WARNING = '\033[93m'
FAIL = '\033[91m'
RESET = '\033[0m'
BOLD = '\033[1m'
UNDERLINE = '\033[4m'

if not os.path.isfile("data.csv"):
	print(FAIL, "\n\tsomething wrong with the file data.csv\n", RESET)
	exit(1)

if not os.access('data.csv', os.R_OK):
	print(FAIL, "\n\tdont have permissions for the file data.csv\n", RESET)
	exit(1)

data = pd.read_csv('data.csv')

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

f_a = open("a", "w")
f_a.write(f"{final_a}")
f_a.close()

f_b = open("b", "w")
f_b.write(f"{final_b}")
f_b.close()

x = x * x_std + x_mean
y = y * y_std + y_mean

fig, ax = plt.subplots()
ax.scatter(x, y, color='red')
ax.plot(x, final_a * x + final_b, color="blue")
fig.canvas.mpl_connect('key_press_event', on_key)

plt.show()

print(GREEN, "A and B variable are stored, ready to prediction", RESET)