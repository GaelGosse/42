#! /bin/bash

clear 

rm -f *.gch */*.gch
if [[ $# == 1 ]]
then
	echo -e $CYAN" ----- $1 ----- "$RST
	make && echo "" && echo -e "\n$BACK_YELLOW ./so_long $RST\n" && valgrind --show-leak-kinds=all --log-file="z1.erb" --leak-check=full ./so_long $1 
	cat z1.erb
elif [[ $# == 0 ]]
then
	echo -e $CYAN" ----- map_1 ----- "$RST
	make && echo "" && echo -e "\n$BACK_YELLOW ./so_long $RST\n" && valgrind --show-leak-kinds=all --log-file="z1.erb" --leak-check=full ./so_long maps/map.ber 
	cat z1.erb
elif [[ $# == 2 ]]
then
	if [[ $2 == "-g" ]]
	then
		echo -e $CYAN" ----- gdb $1 ----- "$RST
		make && echo "" && echo -e "\n$BACK_YELLOW gdb so_long $RST\n" && gdb --args so_long $1
		cat z1.erb
	elif [[ $2 == "-v" ]]
	then
		echo -e $CYAN" ----- valgrind $1 ----- "$RST
		make && echo "" && echo -e "\n$BACK_YELLOW ./so_long $RST\n" && valgrind --show-leak-kinds=all --log-file="z1.erb" --leak-check=full ./so_long $1 
		cat z1.erb
	else
		echo "wrong args"
	fi
else
	echo "wrong arg"
fi

sleep 1
# make clean
echo ""
