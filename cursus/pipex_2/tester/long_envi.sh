#! /bin/bash

clear


good=$BOLD_GREEN"OK"$RST
bad=$BOLD_RED"Error "$RST

big_good=$BACK_GREEN"  OK   "$RST
big_bad=$BACK_RED" Error "$RST


##### TEST TO DO #####
gcc -Wall -Wextra -Werror -g3 */*.c *.c */*.h *.h -o pipex

echo -e $BOLD_WHITE" ----- ----- ----- ----- "$RST" $BACK_YELLOW $(date +"%H:%M:%S") $RST"
echo -e $RED"./pipex infile \"/usr/bin/ls -l -a\" \"wc -l\" \"grep -v 1\" \"dslhkc\" outfile"$RST"\n"
valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./pipex infile "/usr/bin/ls -l -a" "wc -l" "grep -v 1" "dslhkc" outfile


# mv little.sh little_env_i.sh
# mv long.sh long_env_i.sh
# mv mini.sh mini_env_i.sh
# mv tester.sh tester_env_i.sh

cp tester/little.sh tester/little_envi.sh
cp tester/long.sh tester/long_envi.sh
cp tester/mini.sh tester/mini_envi.sh
cp tester/tester.sh tester/tester_envi.sh