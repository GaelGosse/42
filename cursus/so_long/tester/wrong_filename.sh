#! /bin/sh

clear
echo -e $BOLD_RED"\t ----- Wrong filename ----- "$RST
echo

gcc -Wall -Wextra -Werror -g *.c *.h */*.c */*.h -o so_long 

chmod 777 so_long
./so_long maps/wrong_ext.txt
./so_long maps/wrong_ext_2.ber.txt
./so_long maps/abc.ber
