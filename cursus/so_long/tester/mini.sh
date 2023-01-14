#! /bin/bash

clear 
echo -e $CYAN" ----- map_1 ----- "$RST

rm -f *.gch */*.gch
if [[ $# == 1 ]]
then
	gcc -Wall -Wextra -Werror *.c */*.c *.h */*.h -g -o so_long && ./so_long $1
elif [[ $# == 0 ]]
then
	gcc -Wall -Wextra -Werror *.c */*.c *.h */*.h -g -o so_long && ./so_long maps/map_1.ber
else
	echo "wrong arg"
fi

echo ""
