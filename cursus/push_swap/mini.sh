#! /bin/bash

clear

echo -e $BACK_CYAN" ----- START ----- "$RST" $BACK_YELLOW $(date +"%H:%M:%S") $RST\n"

ARGS=$(shuf -i 0-10)
rm -f *.gch
rm -f */*.gch
gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS
rm -f */*.gch
rm -f *.gch
