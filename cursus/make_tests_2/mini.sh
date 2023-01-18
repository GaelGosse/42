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
echo -e "$BACK_WHITE $ARGS $RST" | tr '\n' ' '
echo ""
if [[ $2 == "g" || $2 == "-g" ]]
then
	gcc -Wall -Wextra -Werror -o push_swap -g3 *.c */*.c *.h 
	gcc -Wall -Wextra -Werror -o push_swap -g3 *.c */*.c *.h && valgrind ./push_swap $ARGS
else
	gcc -Wall -Wextra -Werror -o push_swap *.c */*.c *.h && valgrind ./push_swap $ARGS 
fi
rm -f */*.gch
rm -f *.gch
