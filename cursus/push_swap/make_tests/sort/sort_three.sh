#! /bin/bash

echo -e $BACK_CYAN" ----- SORT THREE ----- "$RST" $BACK_YELLOW $(date +"%H:%M:%S") $RST\n"



rm -f *.gch
rm -f */*.gch
gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c  *.h 
rm -f *.gch
rm -f */*.gch

ARGS="1 2 3"
result=$(./push_swap $ARGS | wc -l)
echo -ne "1 2 3 : \t$result\t"
if [[ $result -le 3 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="1 3 2"
result=$(./push_swap $ARGS | wc -l)
echo -ne "1 3 2 : \t$result\t"
if [[ $result -le 3 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="2 1 3"
result=$(./push_swap $ARGS | wc -l)
echo -ne "2 1 3 : \t$result\t"
if [[ $result -le 3 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="2 3 1"
result=$(./push_swap $ARGS | wc -l)
echo -ne "2 3 1 : \t$result\t"
if [[ $result -le 3 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="3 1 2"
result=$(./push_swap $ARGS | wc -l)
echo -ne "3 1 2 : \t$result\t"
if [[ $result -le 3 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="3 2 1"
result=$(./push_swap $ARGS | wc -l)
echo -ne "3 2 1 : \t$result\t"
if [[ $result -le 3 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
