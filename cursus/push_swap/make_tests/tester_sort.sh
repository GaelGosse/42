#! /bin/bash



good=$BOLD_GREEN"OK"$RST
big_good=$BACK_GREEN"  OK   "$RST
bad=$BOLD_RED"Error "$RST
big_bad=$BACK_RED" Error "$RST


bash make_tests/sort/sort_three.sh
echo ""
sleep 2
bash make_tests/sort/sort_five.sh
echo ""
sleep 2
bash make_tests/sort/all.sh 5		# $1 nbr of times
