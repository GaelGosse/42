#! /bin/bash

clear 

rm -f *.gch */*.gch
if [[ $# == 1 ]]
then
	echo -e $CYAN" ----- $1 ----- "$RST
	make && echo "" && echo -e "\n$BACK_YELLOW ./so_long $RST\n" && valgrind --log-file="z1" --leak-check=full ./so_long $1 
elif [[ $# == 0 ]]
then
	echo -e $CYAN" ----- map_1 ----- "$RST
	make && echo "" && echo -e "\n$BACK_YELLOW ./so_long $RST\n" && valgrind --log-file="z1" --leak-check=full ./so_long maps/map_1.ber 
elif [[ $# == 2 ]]
then
	if [[ $2 == "-g" ]]
	then
		echo -e $CYAN" ----- gdb $1 ----- "$RST
		make && echo "" && echo -e "\n$BACK_YELLOW gdb so_long $RST\n" && gdb --args so_long $1
	elif [[ $2 == "-v" ]]
	then
		echo -e $CYAN" ----- valgrind $1 ----- "$RST
		make && echo "" && echo -e "\n$BACK_YELLOW ./so_long $RST\n" && valgrind --log-file="z1" --leak-check=full ./so_long $1 
		code z1
	else
		echo "wrong args"
	fi
else
	echo "wrong arg"
fi

sleep 1
make clean
echo ""
