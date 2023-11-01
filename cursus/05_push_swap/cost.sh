#! /bin/bash

clear

echo -e $BACK_CYAN" ----- START ----- "$RST" $BACK_YELLOW $(date +"%H:%M:%S") $RST\n"

for ((n=4; n<14; n++))
do
	ARGS=$(shuf -i 0-$n)
	echo -e $BACK_WHITE" $n digits "$RST
	rm -f *.gch
	rm -f */*.gch
	gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS
	rm -f */*.gch
	rm -f *.gch
	echo 
done

