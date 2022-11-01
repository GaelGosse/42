#! /bin/sh


clear


rm -f *.gch
rm -f */*.gch
gcc -Wall -Wextra -Werror -g */*.c */*.h *.c *.h -o push_swap
rm -f *.gch
rm -f */*.gch


good=$BOLD_GREEN"OK"$RST
big_good=$BACK_GREEN"  OK   "$RST
bad=$BOLD_RED"Error "$RST
big_bad=$BACK_RED" Error "$RST


./push_swap 1 2 3
./push_swap 1 3 2
./push_swap 2 1 3
./push_swap 2 3 1
./push_swap 3 1 2
./push_swap 3 2 1

