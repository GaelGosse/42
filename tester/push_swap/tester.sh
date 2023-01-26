#! /bin/bash

clear


good="\033[32mOK\033[0m"
bad="\033[31mError \033[0m"

big_good="\033[32m  OK   \033[0m"
big_bad="\033[31m Error \033[0m"

# norminette | grep
# is sorted for 100 500
# title for big

# tester printf
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

# tester compilation
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
	gcc -Wall -Wextra -Werror -g *.c */*.c *.h -o push_swap
fi

# tester push_swap
if [ $? -eq 0 ]
then
	echo 
	echo -ne "$BOLD_WHITE Compilation $RST"
	echo -e $good
	sleep 1

	echo -e "\n$BOLD_WHITE CHECK ARGS $RST\n"
	bash make_tests/tester_args.sh
	echo -e "\n$BOLD_WHITE SORTING $RST\n"
	bash make_tests/tester_sort.sh

else
	echo -ne "$BOLD_WHITE Compilation $RST"
	echo -e $bad
fi
echo ""

# grep -ri printf
# grep -ri ft_printf
# makefile
# valgrind on error (args)
# valgrind on 100 n 500