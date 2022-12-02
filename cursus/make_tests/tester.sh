#! /bin/bash

clear


good=$BOLD_GREEN"OK"$RST
big_good=$BACK_GREEN"  OK   "$RST
bad=$BOLD_RED"Error "$RST
big_bad=$BACK_RED" Error "$RST

gcc -Wall -Wextra -Werror -g */*.c */*.h *.c *.h -o push_swap
echo ""
echo -ne "$BOLD_WHITE Compilation $RST"
if [ $? -ne 0 ]
then
	echo -e $bad
else
	echo -e $good
	sleep 1
	rm -f *.gch
	rm -f */*.gch
	gcc -Wall -Wextra -Werror -g */*.c */*.h *.c *.h -o push_swap
	rm -f *.gch
	rm -f */*.gch

	echo -e "\n$BOLD_WHITE CHECK ARGS $RST\n"
	bash make_tests/tester_args.sh
	echo -e "\n$BOLD_WHITE SORTING $RST\n"
	bash make_tests/tester_sort.sh
fi
echo ""
