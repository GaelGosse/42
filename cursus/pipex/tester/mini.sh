#! /bin/bash

clear


good=$BOLD_GREEN"OK"$RST
bad=$BOLD_RED"Error "$RST

big_good=$BACK_GREEN"  OK   "$RST
big_bad=$BACK_RED" Error "$RST



##### TEST TO DO #####
gcc -Wall -Wextra -Werror -g3 */*.c *.c */*.h *.h -o pipex

echo -e $RED" ----- ----- ----- ----- "$RST" $BACK_YELLOW $(date +"%H:%M:%S") $RST\n"
echo -e BOLD_RED"./pipex infile \"ls -l -a\" \"/usr/bin/grep c\" outfile"RST
./pipex infile "ls -l -a" "/usr/bin/grep c" outfile


