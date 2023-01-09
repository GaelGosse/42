#! /bin/bash

clear


good=$BOLD_GREEN"OK"$RST
bad=$BOLD_RED"Error "$RST

big_good=$BACK_GREEN"  OK   "$RST
big_bad=$BACK_RED" Error "$RST

##### tester printf #####
if grep -ri "ft_printf" --exclude-dir=make_tests
then
	echo "Is your printf allowed ? (y/n)"
	read answer
	if [[ $answer != "y" && $answer != "yes" ]]
	then
		echo -e $bad
		exit 1
	fi
else
	if grep -ri "printf" --exclude-dir=make_tests 
	then
		echo -e $bad
		exit 1
	fi
fi

##### tester compilation #####
if [ -f Makefile ]
then
	echo -e $GREEN"Makefile found"$RST
	echo
	if make | grep -i "make: Nothing to be done for 'all'."
	then
		make re
	fi
else
	echo -e $RED"no Makefile found"$RST
	echo
	gcc -Wall -Wextra -Werror -g3 */*.c *.c */*.h *.h -o pipex
	rm *.gch */*.gch
fi

##### tester pipex #####
if [ $? -eq 0 ]
then
	echo 
	echo -ne "$BOLD_WHITE Compilation $RST"
	echo -e $good
	sleep 1

	##### TEST TO DO #####
	gcc -Wall -Wextra -Werror -g3 */*.c *.c */*.h *.h -o pipex
	rm *.gch */*.gch
	echo -e $RED" ----- ----- ----- ----- "$RST" $BACK_YELLOW $(date +"%H:%M:%S") $RST\n"
	echo -e BOLD_RED"./pipex infile \"ls -l -a\" \"/usr/bin/grep c\" outfile"RST
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./pipex infile "ls -l -a" "/usr/bin/grep c" outfile

	echo -e $RED" ----- ----- ----- ----- "$RST" $BACK_YELLOW $(date +"%H:%M:%S") $RST\n"
	echo -e $RED"./pipex infile \"ls -l -a\" \"/usr/bin/grep c\" outfile"$RST
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./pipex infile "ls -l -a" "/usr/bin/grep c" outfile

else
	echo -ne "$BOLD_WHITE Compilation $RST"
	echo -e $bad
fi
echo ""
