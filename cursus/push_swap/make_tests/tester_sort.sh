#! /bin/bash



good=$BOLD_GREEN"OK"$RST
big_good=$BACK_GREEN"  OK   "$RST
bad=$BOLD_RED"Error "$RST
big_bad=$BACK_RED" Error "$RST




bash make_tests/sort/sort_three.sh

echo ""

bash make_tests/sort/sort_four.sh

echo ""

bash make_tests/sort/sort_five.sh

echo ""

bash make_tests/sort/all.sh 5		# $1 nbr of times
