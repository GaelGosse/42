#! /bin/bash

clear


good=$BOLD_GREEN"OK"$RST
bad=$BOLD_RED"Error "$RST

big_good=$BACK_GREEN"  OK   "$RST
big_bad=$BACK_RED" Error "$RST


##### TEST TO DO #####
gcc -Wall -Wextra -Werror -g3 */*.c *.c */*.h *.h -o pipex

echo -e $BOLD_WHITE" ----- ----- ----- ----- "$RST" $BACK_YELLOW $(date +"%H:%M:%S") $RST"
echo -e $RED"./pipex infile \"/usr/bin/wc -l -a\" \"wc -l\" outfile"$RST"\n"
valgrind ./pipex infile "/usr/bin/wc -l -a" "wc -l" outfile


