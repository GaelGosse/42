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
rm -f *.gch
rm -f */*.gch
gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS
rm -f */*.gch
rm -f *.gch