#! /bin/bash

clear 

rm -f *.gch */*.gch
if [[ $# == 1 ]]
then
	echo -e $CYAN" ----- $1 ----- "$RST
	gcc -Wall -Wextra -Werror *.c libft/*.c *.h libft/*.h -g -o so_long && ./so_long $1
elif [[ $# == 0 ]]
then
	echo -e $CYAN" ----- map_1 ----- "$RST
	gcc -Wall -Wextra -Werror *.c libft/*.c *.h libft/*.h -g -o so_long && ./so_long maps/map_1.ber
else
	echo "wrong arg"
fi

echo ""
