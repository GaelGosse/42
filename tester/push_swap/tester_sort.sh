#! /bin/bash



BACK_GREEN="\033[32m"
BACK_RED="\033[31m"
RST="\033[0m"

good="\033[32mOK\033[0m"
bad="\033[31mError \033[0m"

big_good="\033[32m  OK   \033[0m"
big_bad="\033[31m Error \033[0m"




bash make_tests/sort/sort_three.sh

echo ""

bash make_tests/sort/sort_four.sh

echo ""

bash make_tests/sort/sort_five.sh

echo ""

bash make_tests/sort/sort_all.sh 5		# $1 nbr of times
