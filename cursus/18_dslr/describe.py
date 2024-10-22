import os
import sys
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

# print("type(): ", type(sys))
# print("dir(): ", dir(sys))
# print("id(): ", id(sys))
# print("getattr(): ", getattr(sys))
# print("hasattr(): ", hasattr(sys))
# print("globals(): ", globals(sys))
# print("locals(): ", locals(sys))
# print("callable(): ", callable(sys))


if len(sys.argv) != 2:
	print(FAIL, f"{os.path.basename(__file__)} must have one argument", RESET)
	exit(1)

file_name = sys.argv[1]

if not os.path.isfile(file_name):
	print(FAIL, f"\n\tsomething wrong with the file {file_name}\n", RESET)
	exit(1)

if not os.access(file_name, os.R_OK):
	print(FAIL, f"\n\tdont have permissions for the file {file_name}\n", RESET)
	exit(1)

if not file_name.endswith('.csv'):
	print(FAIL, f"\n\{file_name} must be a csv\n", RESET)
	exit(1)

data = pd.read_csv(file_name)

print(f"data.columns: {data.columns}")