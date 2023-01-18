#! /bin/sh

echo -e $BACK_CYAN" ----- SORT FOUR ----- "$RST" $BACK_YELLOW $(date +"%H:%M:%S") $RST\n"

rm -f *.gch
gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c *.h 
rm -f *.gch

BACK_GREEN="\033[32m"
BACK_RED="\033[31m"
RST="\033[0m"


echo -e $BACK_WHITE" X X X X : \t sorted \t valgrind "$RST
echo 

ARGS="1 2 3 4"
score=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne " $ARGS : \t"
if [[ $score == "OK" ]]
then
	echo -ne " $BACK_GREEN OK $RST"
else
	echo -ne " $BACK_RED ERR $RST"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t  $BACK_GREEN OK $RST"
else
	echo -e "\t\t  $BACK_RED ERR $RST"
fi

ARGS="1 2 4 3"
score=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne " $ARGS : \t"
if [[ $score == "OK" ]]
then
	echo -ne " $BACK_GREEN OK $RST"
else
	echo -ne " $BACK_RED ERR $RST"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t  $BACK_GREEN OK $RST"
else
	echo -e "\t\t  $BACK_RED ERR $RST"
fi

ARGS="1 3 2 4"
score=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne " $ARGS : \t"
if [[ $score == "OK" ]]
then
	echo -ne " $BACK_GREEN OK $RST"
else
	echo -ne " $BACK_RED ERR $RST"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t  $BACK_GREEN OK $RST"
else
	echo -e "\t\t  $BACK_RED ERR $RST"
fi

ARGS="1 3 4 2"
score=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne " $ARGS : \t"
if [[ $score == "OK" ]]
then
	echo -ne " $BACK_GREEN OK $RST"
else
	echo -ne " $BACK_RED ERR $RST"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t  $BACK_GREEN OK $RST"
else
	echo -e "\t\t  $BACK_RED ERR $RST"
fi

ARGS="1 4 2 3"
score=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne " $ARGS : \t"
if [[ $score == "OK" ]]
then
	echo -ne " $BACK_GREEN OK $RST"
else
	echo -ne " $BACK_RED ERR $RST"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t  $BACK_GREEN OK $RST"
else
	echo -e "\t\t  $BACK_RED ERR $RST"
fi

ARGS="1 4 3 2"
score=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne " $ARGS : \t"
if [[ $score == "OK" ]]
then
	echo -ne " $BACK_GREEN OK $RST"
else
	echo -ne " $BACK_RED ERR $RST"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t  $BACK_GREEN OK $RST"
else
	echo -e "\t\t  $BACK_RED ERR $RST"
fi

ARGS="2 1 3 4"
score=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne " $ARGS : \t"
if [[ $score == "OK" ]]
then
	echo -ne " $BACK_GREEN OK $RST"
else
	echo -ne " $BACK_RED ERR $RST"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t  $BACK_GREEN OK $RST"
else
	echo -e "\t\t  $BACK_RED ERR $RST"
fi

ARGS="2 1 4 3"
score=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne " $ARGS : \t"
if [[ $score == "OK" ]]
then
	echo -ne " $BACK_GREEN OK $RST"
else
	echo -ne " $BACK_RED ERR $RST"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t  $BACK_GREEN OK $RST"
else
	echo -e "\t\t  $BACK_RED ERR $RST"
fi

ARGS="2 3 1 4"
score=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne " $ARGS : \t"
if [[ $score == "OK" ]]
then
	echo -ne " $BACK_GREEN OK $RST"
else
	echo -ne " $BACK_RED ERR $RST"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t  $BACK_GREEN OK $RST"
else
	echo -e "\t\t  $BACK_RED ERR $RST"
fi

ARGS="2 3 4 1"
score=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne " $ARGS : \t"
if [[ $score == "OK" ]]
then
	echo -ne " $BACK_GREEN OK $RST"
else
	echo -ne " $BACK_RED ERR $RST"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t  $BACK_GREEN OK $RST"
else
	echo -e "\t\t  $BACK_RED ERR $RST"
fi

ARGS="2 4 1 3"
score=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne " $ARGS : \t"
if [[ $score == "OK" ]]
then
	echo -ne " $BACK_GREEN OK $RST"
else
	echo -ne " $BACK_RED ERR $RST"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t  $BACK_GREEN OK $RST"
else
	echo -e "\t\t  $BACK_RED ERR $RST"
fi

ARGS="2 4 3 1"
score=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne " $ARGS : \t"
if [[ $score == "OK" ]]
then
	echo -ne " $BACK_GREEN OK $RST"
else
	echo -ne " $BACK_RED ERR $RST"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t  $BACK_GREEN OK $RST"
else
	echo -e "\t\t  $BACK_RED ERR $RST"
fi

ARGS="3 1 2 4"
score=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne " $ARGS : \t"
if [[ $score == "OK" ]]
then
	echo -ne " $BACK_GREEN OK $RST"
else
	echo -ne " $BACK_RED ERR $RST"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t  $BACK_GREEN OK $RST"
else
	echo -e "\t\t  $BACK_RED ERR $RST"
fi

ARGS="3 1 4 2"
score=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne " $ARGS : \t"
if [[ $score == "OK" ]]
then
	echo -ne " $BACK_GREEN OK $RST"
else
	echo -ne " $BACK_RED ERR $RST"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t  $BACK_GREEN OK $RST"
else
	echo -e "\t\t  $BACK_RED ERR $RST"
fi

ARGS="3 2 1 4"
score=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne " $ARGS : \t"
if [[ $score == "OK" ]]
then
	echo -ne " $BACK_GREEN OK $RST"
else
	echo -ne " $BACK_RED ERR $RST"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t  $BACK_GREEN OK $RST"
else
	echo -e "\t\t  $BACK_RED ERR $RST"
fi

ARGS="3 2 4 1"
score=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne " $ARGS : \t"
if [[ $score == "OK" ]]
then
	echo -ne " $BACK_GREEN OK $RST"
else
	echo -ne " $BACK_RED ERR $RST"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t  $BACK_GREEN OK $RST"
else
	echo -e "\t\t  $BACK_RED ERR $RST"
fi

ARGS="3 4 1 2"
score=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne " $ARGS : \t"
if [[ $score == "OK" ]]
then
	echo -ne " $BACK_GREEN OK $RST"
else
	echo -ne " $BACK_RED ERR $RST"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t  $BACK_GREEN OK $RST"
else
	echo -e "\t\t  $BACK_RED ERR $RST"
fi

ARGS="3 4 2 1"
score=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne " $ARGS : \t"
if [[ $score == "OK" ]]
then
	echo -ne " $BACK_GREEN OK $RST"
else
	echo -ne " $BACK_RED ERR $RST"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t  $BACK_GREEN OK $RST"
else
	echo -e "\t\t  $BACK_RED ERR $RST"
fi

ARGS="4 1 2 3"
score=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne " $ARGS : \t"
if [[ $score == "OK" ]]
then
	echo -ne " $BACK_GREEN OK $RST"
else
	echo -ne " $BACK_RED ERR $RST"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t  $BACK_GREEN OK $RST"
else
	echo -e "\t\t  $BACK_RED ERR $RST"
fi

ARGS="4 1 3 2"
score=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne " $ARGS : \t"
if [[ $score == "OK" ]]
then
	echo -ne " $BACK_GREEN OK $RST"
else
	echo -ne " $BACK_RED ERR $RST"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t  $BACK_GREEN OK $RST"
else
	echo -e "\t\t  $BACK_RED ERR $RST"
fi

ARGS="4 2 1 3"
score=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne " $ARGS : \t"
if [[ $score == "OK" ]]
then
	echo -ne " $BACK_GREEN OK $RST"
else
	echo -ne " $BACK_RED ERR $RST"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t  $BACK_GREEN OK $RST"
else
	echo -e "\t\t  $BACK_RED ERR $RST"
fi

ARGS="4 2 3 1"
score=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne " $ARGS : \t"
if [[ $score == "OK" ]]
then
	echo -ne " $BACK_GREEN OK $RST"
else
	echo -ne " $BACK_RED ERR $RST"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t  $BACK_GREEN OK $RST"
else
	echo -e "\t\t  $BACK_RED ERR $RST"
fi

ARGS="4 3 1 2"
score=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne " $ARGS : \t"
if [[ $score == "OK" ]]
then
	echo -ne " $BACK_GREEN OK $RST"
else
	echo -ne " $BACK_RED ERR $RST"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t  $BACK_GREEN OK $RST"
else
	echo -e "\t\t  $BACK_RED ERR $RST"
fi

ARGS="4 3 2 1"
score=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne " $ARGS : \t"
if [[ $score == "OK" ]]
then
	echo -ne " $BACK_GREEN OK $RST"
else
	echo -ne " $BACK_RED ERR $RST"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t  $BACK_GREEN OK $RST"
else
	echo -e "\t\t  $BACK_RED ERR $RST"
fi
