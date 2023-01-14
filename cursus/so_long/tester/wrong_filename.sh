#! /bin/sh

clear
echo -e $BOLD_RED"\t ----- Wrong filename ----- "$RST
echo

gcc -Wall -Wextra -Werror -g *.c *.h */*.c */*.h -o so_long 

chmod 777 so_long

./so_long maps/no_collect.ber
./so_long maps/no_exit.ber
./so_long maps/no_perso.ber
./so_long maps/wrong_ext.txt
./so_long maps/wrong_ext_2.ber.txt
