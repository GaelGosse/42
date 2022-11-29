#! /bin/bash

clear

# echo -e $BACK_CYAN" ----- START ----- "$RST" $BACK_YELLOW $(date +"%H:%M:%S") $RST\n"

rm -f *.gch
rm -f */*.gch
ARGS="2 1 5 3 4"
gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l
rm -f */*.gch
rm -f *.gch



