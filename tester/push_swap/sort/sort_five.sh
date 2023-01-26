#! /bin/sh

echo -e $BACK_CYAN" ----- SORT FIVE ----- "$RST" $BACK_YELLOW $(date +"%H:%M:%S") $RST\n"



rm -f *.gch
rm -f */*.gch
gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c *.h 
rm -f *.gch
rm -f */*.gch

BACK_GREEN="\033[32m"
BACK_RED="\033[31m"
RST="\033[0m"

echo ""
echo -e $BACK_WHITE" 1 X X X X \t lines \t moves \t\t sorted \t valgrind "$RST
echo ""

ARGS="1 2 3 4 5"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="1 2 3 5 4"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="1 2 4 3 5"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="1 2 4 5 3"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="1 2 5 3 4"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="1 2 5 4 3"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="1 3 2 4 5"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="1 3 2 5 4"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="1 3 4 2 5"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="1 3 4 5 2"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="1 3 5 2 4"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="1 3 5 4 2"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="1 4 2 3 5"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="1 4 2 5 3"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="1 4 3 2 5"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="1 4 3 5 2"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="1 4 5 2 3"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="1 4 5 3 2"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="1 5 2 3 4"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="1 5 2 4 3"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="1 5 3 2 4"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="1 5 3 4 2"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="1 5 4 2 3"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="1 5 4 3 2"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

echo ""
echo -e $BACK_WHITE" 2 X X X X \t lines \t moves \t\t sorted \t valgrind "$RST
echo ""

ARGS="2 1 3 4 5"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="2 1 3 5 4"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="2 1 4 3 5"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="2 1 4 5 3"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="2 1 5 3 4"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="2 1 5 4 3"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="2 3 1 4 5"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="2 3 1 5 4"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="2 3 4 1 5"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="2 3 4 5 1"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="2 3 5 1 4"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="2 3 5 4 1"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="2 4 1 3 5"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="2 4 1 5 3"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="2 4 3 1 5"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="2 4 3 5 1"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="2 4 5 1 3"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="2 4 5 3 1"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="2 5 1 3 4"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="2 5 1 4 3"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="2 5 3 1 4"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="2 5 3 4 1"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="2 5 4 1 3"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="2 5 4 3 1"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

echo ""
echo -e $BACK_WHITE" 3 X X X X \t lines \t moves \t\t sorted \t valgrind "$RST
echo ""

ARGS="3 1 2 4 5"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="3 1 2 5 4"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="3 1 4 2 5"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="3 1 4 5 2"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="3 1 5 2 4"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="3 1 5 4 2"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="3 2 1 4 5"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="3 2 1 5 4"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="3 2 4 1 5"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="3 2 4 5 1"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="3 2 5 1 4"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="3 2 5 4 1"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="3 4 1 2 5"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="3 4 1 5 2"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="3 4 2 1 5"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="3 4 2 5 1"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="3 4 5 1 2"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="3 4 5 2 1"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="3 5 1 2 4"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="3 5 1 4 2"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="3 5 2 1 4"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="3 5 2 4 1"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="3 5 4 1 2"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="3 5 4 2 1"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

echo ""
echo -e $BACK_WHITE" 4 X X X X \t lines \t moves \t\t sorted \t valgrind "$RST
echo ""

ARGS="4 1 2 3 5"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="4 1 2 5 3"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="4 1 3 2 5"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="4 1 3 5 2"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="4 1 5 2 3"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="4 1 5 3 2"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="4 2 1 3 5"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="4 2 1 5 3"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="4 2 3 1 5"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="4 2 3 5 1"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="4 2 5 1 3"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="4 2 5 3 1"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="4 3 1 2 5"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="4 3 1 5 2"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="4 3 2 1 5"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="4 3 2 5 1"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="4 3 5 1 2"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="4 3 5 2 1"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="4 5 1 2 3"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="4 5 1 3 2"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="4 5 2 1 3"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="4 5 2 3 1"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="4 5 3 1 2"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="4 5 3 2 1"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

echo ""
echo -e $BACK_WHITE" 5 X X X X \t lines \t moves \t\t sorted \t valgrind "$RST
echo ""

ARGS="5 1 2 3 4"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="5 1 2 4 3"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="5 1 3 2 4"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="5 1 3 4 2"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="5 1 4 2 3"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="5 1 4 3 2"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="5 2 1 3 4"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="5 2 1 4 3"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="5 2 3 1 4"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="5 2 3 4 1"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="5 2 4 1 3"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="5 2 4 3 1"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="5 3 1 2 4"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="5 3 1 4 2"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="5 3 2 1 4"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="5 3 2 4 1"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="5 3 4 1 2"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="5 3 4 2 1"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="5 4 1 2 3"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="5 4 1 3 2"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="5 4 2 1 3"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="5 4 2 3 1"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="5 4 3 1 2"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi

ARGS="5 4 3 2 1"
nbr_lines=$(./push_swap $ARGS | wc -l)
moves=$(./push_swap $ARGS | ./make_tests/checker_linux $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t $nbr_lines \t"
if [[ $nbr_lines -le 12 ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $moves == "OK" ]]
then
	echo -ne "\t\t $BACK_GREEN OK $RST"
else
	echo -ne "\t\t $BACK_RED ERR $RST"	
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED Err $RST"
fi
