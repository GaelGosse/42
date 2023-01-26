#! /bin/bash

clear 

rm -f *.gch */*.gch
if [[ $# == 1 ]]
then
	echo -e $CYAN" ----- $1 ----- "$RST
	make && echo "" && echo -e "\n$BACK_YELLOW ./so_long $RST\n" && ./so_long $1
elif [[ $# == 0 ]]
then
	echo -e $CYAN" ----- map_1 ----- "$RST
	make && echo "" && echo -e "\n$BACK_YELLOW ./so_long $RST\n" && ./so_long maps/map_1.ber
else
	echo "wrong arg"
fi

echo ""
