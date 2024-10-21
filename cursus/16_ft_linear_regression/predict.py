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

final_a = 0
final_b = 0

# ----- ----- file A ----- -----
if os.path.isfile("a") and os.access('a', os.R_OK):
	f_a = open("a", "r")
	final_a = f_a.read()
	f_a.close()


# ----- ----- file B ----- -----
if os.path.isfile("b") and os.access('b', os.R_OK):
	f_b = open("b", "r")
	final_b = f_b.read()
	f_b.close()
else:
	print(WARNING, "\n\tit will be better if you launch training.py firstly but a and b for now are equal to 0\n", RESET)

print(f"final_a: {final_a}")
print(f"final_b: {final_b}")


km_input = input("What is the mileage of your vehicle ?\n")

if not km_input.isdigit() or int(km_input) <= 0:
	print(FAIL, "\n\tMileage must be a positive number and not null\n", RESET)
	exit(1)


result_price = float(final_a) * float(km_input) + float(final_b)
print(result_price)


if result_price < 0:
	print(WARNING, "\nBecause it's a linear regression project with linear function and not so much complicated, I consider negative value close to zero in real life")
	print(f" so {result_price} will be > 0", RESET)
else:
	print(BOLD, f"\nThe price of your vehicke is estimated to : {result_price}", RESET)