#! /bin/bash

rm -f *.gch
rm -f */*.gch
gcc -Wall -Wextra -Werror -g */*.c */*.h *.c *.h -o push_swap
rm -f *.gch
rm -f */*.gch

clear

good=$BOLD_GREEN"OK"$RST
big_good=$BACK_GREEN"  OK   "$RST
bad=$BOLD_RED"Error "$RST
big_bad=$BACK_RED" Error "$RST


source make_tests/args/minus_sign.sh 
source make_tests/args/plus_sign.sh 
source make_tests/args/letter.sh 
source make_tests/args/nbr_args.sh 
 