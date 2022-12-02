#! /bin/bash

clear

rm -f *.gch
rm -f */*.gch
gcc -Wall -Wextra -Werror -g */*.c */*.h *.c *.h -o push_swap
rm -f *.gch
rm -f */*.gch

echo -e "\n$BOLD_WHITE CHECK ARGS $RST\n"
bash make_tests/tester_args.sh
echo -e "\n$BOLD_WHITE SORTING $RST\n"
bash make_tests/tester_sort.sh