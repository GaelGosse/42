#! /bin/bash

rm -f *.gch
rm -f */*.gch
gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c *.h 
rm -f *.gch
rm -f */*.gch

BACK_GREEN="\033[32m"
BACK_RED="\033[31m"
RST="\033[0m"

echo
echo -e $BACK_CYAN" ----- SORT TWO ----- "$RST" $BACK_YELLOW $(date +"%H:%M:%S") $RST\n"

echo -e $BACK_WHITE"X X : \t lines \t score \t\t sorted \t valgrind "$RST

ARGS="0 1"
nbr_lines=$(./push_swap $ARGS | wc -l)
score=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 3 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $score == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t  $BACK_GREEN OK $RST"
else
	echo -e "\t\t  $BACK_RED ERR $RST"
fi

ARGS="1 0"
nbr_lines=$(./push_swap $ARGS | wc -l)
score=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 3 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $score == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t  $BACK_GREEN OK $RST"
else
	echo -e "\t\t  $BACK_RED ERR $RST"
fi

echo
echo -e $BACK_CYAN" ----- SORT THREE ----- "$RST" $BACK_YELLOW $(date +"%H:%M:%S") $RST\n"
echo


echo -e $BACK_WHITE"X X X : \t lines \t score \t\t sorted \t valgrind "$RST
echo 
ARGS="1 2 3"
nbr_lines=$(./push_swap $ARGS | wc -l)
score=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 3 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $score == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t  $BACK_GREEN OK $RST"
else
	echo -e "\t\t  $BACK_RED ERR $RST"
fi

ARGS="1 3 2"
nbr_lines=$(./push_swap $ARGS | wc -l)
score=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 3 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $score == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t  $BACK_GREEN OK $RST"
else
	echo -e "\t\t  $BACK_RED ERR $RST"
fi

ARGS="2 1 3"
nbr_lines=$(./push_swap $ARGS | wc -l)
score=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 3 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $score == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t  $BACK_GREEN OK $RST"
else
	echo -e "\t\t  $BACK_RED ERR $RST"
fi

ARGS="2 3 1"
nbr_lines=$(./push_swap $ARGS | wc -l)
score=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 3 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $score == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t  $BACK_GREEN OK $RST"
else
	echo -e "\t\t  $BACK_RED ERR $RST"
fi

ARGS="3 1 2"
nbr_lines=$(./push_swap $ARGS | wc -l)
score=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 3 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $score == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t  $BACK_GREEN OK $RST"
else
	echo -e "\t\t  $BACK_RED ERR $RST"
fi

ARGS="3 2 1"
nbr_lines=$(./push_swap $ARGS | wc -l)
score=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 3 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $score == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t  $BACK_GREEN OK $RST"
else
	echo -e "\t\t  $BACK_RED ERR $RST"
fi
