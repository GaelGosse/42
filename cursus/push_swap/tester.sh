#! /bin/sh

rm -f *.gch
rm -f */*.gch
gcc -Wall -Wextra -Werror -g */*.c */*.h *.c *.h -o push_swap
rm -f *.gch
rm -f */*.gch

SPACE='      '
good=$BOLD_GREEN"OK"$RST
big_good=$BACK_GREEN" OK "$RST
bad=$BOLD_RED"Error "$RST
big_bad=$BACK_RED" Error "$RST

# source make_tests/one.sh 
source make_tests/four.sh 
# source make_tests/two.sh 
# source make_tests/three.sh 
# source make_tests/five.sh 
# source make_tests/six.sh 