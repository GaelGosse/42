#! /bin/bash

clear


good=$BOLD_GREEN"OK"$RST
bad=$BOLD_RED"Error "$RST

big_good=$BACK_GREEN"  OK   "$RST
big_bad=$BACK_RED" Error "$RST



##### TEST TO DO #####
gcc -Wall -Wextra -Werror -g3 */*.c *.c */*.h *.h -o pipex
rm *.gch */*.gch

echo -e $RED" ----- ----- ----- ----- "$RST" $BACK_YELLOW $(date +"%H:%M:%S") $RST"
echo -e $RED"./pipex infile \"ls\" \"/usr/bin/grep c\" outfile"$RST"\n"
# valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes  --leak-check=full --show-leak-kinds=all --track-origins=yes 
./pipex infile "ls" "/usr/bin/grep c" outfile


