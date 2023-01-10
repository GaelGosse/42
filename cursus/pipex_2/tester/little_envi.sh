#! /bin/bash

clear


good=$BOLD_GREEN"OK"$RST
bad=$BOLD_RED"Error "$RST

big_good=$BACK_GREEN"  OK   "$RST
big_bad=$BACK_RED" Error "$RST


##### TEST TO DO #####
gcc -Wall -Wextra -Werror -g3 */*.c *.c */*.h *.h -o pipex 
rm *.gch */*.gch

echo -e $BOLD_WHITE" ----- ----- ----- ----- "$RST" $BACK_YELLOW $(date +"%H:%M:%S") $RST"
echo -e $RED"./pipex infile \"/usr/bin//usr/bin/wc -l -a\" \"/usr/bin/wc -l\" outfile"$RST"\n"
valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./pipex infile "/usr/bin//usr/bin/wc -l -a" "/usr/bin/wc -l" outfile


