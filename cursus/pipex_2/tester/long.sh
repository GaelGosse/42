#! /bin/bash

clear


good=$BOLD_GREEN"OK"$RST
bad=$BOLD_RED"Error "$RST

big_good=$BACK_GREEN"  OK   "$RST
big_bad=$BACK_RED" Error "$RST


##### TEST TO DO #####
gcc -Wall -Wextra -Werror -g */*.c *.c */*.h *.h -o pipex
# rm -f .gch
# rm -f /*.gch

echo -e $BOLD_WHITE" ----- ----- ----- ----- "$RST" $BACK_YELLOW $(date +"%H:%M:%S") $RST"
echo -e $CYAN"./pipex infile \"ls\" \"/usr/bin/wc -l\" \"grep -v 1\" \"echo OK\" outfile"$RST"\n"
# valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes 
./pipex infile "ls" "/usr/bin/wc -l" "grep -v 1" "echo OK" outfile
