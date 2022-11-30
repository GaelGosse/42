#! /bin/bash

clear

echo -e $BACK_CYAN" ----- START ----- "$RST" $BACK_YELLOW $(date +"%H:%M:%S") $RST\n"

if [[ $# == 0 ]]
then
	ARGS=$(shuf -i 0-9)
else
	nbr=$1
	let "nbr-=1"
	ARGS=$(shuf -i 0-$nbr)
fi
echo -e "$BACK_WHITE $ARGS $RST" | tr '\n' ' '
echo ""
rm -f *.gch
rm -f */*.gch
# ARGS="2 5 8 1 9 6 7 3"
# ARGS="14 1 7 15 2 12 4 18 3 17 10 9 13 16 5 20 6 8 19 11"
# ARGS="13 23 4 21 29 26 33 18 5 36 27 24 15 28 22 8 25 32 16 31 35 40 11 3 1 7 17 12 38 10 19 30 20 6 14 39 2 9 37 34 "
# ARGS="21 23 12 39 7 6 20 4 29 37 13 28 31 32 15 2 34 25 36 17 8 30 18 1 14 10 22 35 19 38 27 24 3 16 26 9 11 40 5 33 "
# ARGS="23 19 9 1 17 32 11 24 30 29 6 31 13 21 39 10 35 36 40 5 15 8 4 22 28 38 3 27 18 34 16 7 12 37 33 20 25 26 2 14 "
if [[ $2 == "g" || $2 == "-g" ]]
then
	gcc -Wall -Wextra -Werror -o push_swap -g3 *.c */*.c */*.h *.h 
	gcc -Wall -Wextra -Werror -o push_swap -g3 *.c */*.c */*.h *.h && ./push_swap $ARGS
else
	gcc -Wall -Wextra -Werror -o push_swap *.c */*.c */*.h *.h && ./push_swap $ARGS
fi
rm -f */*.gch
rm -f *.gch
