#! /bin/bash

echo -e $BACK_CYAN" ----- SORT BIG ----- "$RST" $BACK_YELLOW $(date +"%H:%M:%S") $RST\n"


rm -f *.gch
rm -f */*.gch
gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c  *.h 
rm -f *.gch
rm -f */*.gch

BACK_GREEN="\033[32m"
BACK_RED="\033[31m"
RST="\033[0m"


echo -e "$BOLD_CYAN Already sorted : $RST"

ARGS="-1 2 3 4 5 6 7 8 9 60"
result=$(./push_swap $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t$result"
if [[ $result == "" ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED ERR $RST"
fi

ARGS="2147483647"
result=$(./push_swap $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t\t\t$result"
if [[ $result == "" ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED ERR $RST"
fi

ARGS="2147483648"
result=$(./push_swap $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "$ARGS : \t\t$result\t"
if [[ $result == "Error" ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED ERR $RST"
fi

ARGS=""
result=$(./push_swap $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "EMPTY : \t\t\t$result"
if [[ $result == "" ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED ERR $RST"
fi

ARGS=" "
result=$(./push_swap $ARGS)
vlg=$(valgrind ./push_swap $ARGS 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
echo -ne "SPACE : \t\t\t$result"
if [[ $result == "" ]]
then
	echo -ne "$BACK_GREEN OK $RST"
else
	echo -ne "$BACK_RED ERR $RST"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e "\t\t $BACK_GREEN OK $RST"
else
	echo -e "\t\t $BACK_RED ERR $RST"
fi


echo -e "\n$BOLD_CYAN 100 : $RST"

ite_big=0
while [[ $ite_big -lt $1 ]]
do
	max=100
	arg=1
	res=0
	prepare_array=()
	ARGS=()

	for ((ite=0; ite<$max; ite++))
	do
		res=$arg
		prepare_array+=($res)
		let "arg+=1"
	done

	prepare_array=( $(shuf -e "${prepare_array[@]}") )

	for arg in ${prepare_array[@]}
	do
		sign="$((1 + $RANDOM % 2))"
		res=$arg
		ARGS+=($res)
	done

	let "ite_big+=1"
	result=$(./push_swap ${ARGS[@]} | wc -l)
	vlg=$(valgrind ./push_swap ${ARGS[@]} 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
	echo -ne "$BOLD_WHITE $ite_big : $RST\t$result\t"
	if [[ $result -le 700 ]]
	then
		echo -ne $BOLD_GREEN"5/5"$RST		
	elif [[ $result -le 900 ]]
	then
		echo -ne $GREEN"4/5"$RST		
	elif [[ $result -le 1100 ]]
	then
		echo -ne $YELLOW"3/5"$RST		
	elif [[ $result -le 1300 ]]
	then
		echo -ne $BOLD_YELLOW"2/5"$RST		
	elif [[ $result -le 1500 ]]
	then
		echo -ne $RED"1/5"$RST
	else 
		echo -ne $BOLD_RED"OUT"$RST
	fi
	if [[ $vlg -eq 1 ]]
	then
		echo -e "\t$BACK_GREEN OK $RST"
	else
		echo -e "\t$BACK_RED ERR $RST"
	fi
done

echo ""
echo -e "$BOLD_CYAN 500 : $RST"

ite_big=0
while [[ $ite_big -lt $1 ]]
do
	max=500
	arg=1
	res=0
	prepare_array=()
	ARGS=()

	for ((ite=0; ite<$max; ite++))
	do
		res=$arg
		prepare_array+=($res)
		let "arg+=1"
	done

	prepare_array=( $(shuf -e "${prepare_array[@]}") )

	for arg in ${prepare_array[@]}
	do
		sign="$((1 + $RANDOM % 2))"
		res=$arg
		ARGS+=($res)
	done

	let "ite_big+=1"
	result=$(./push_swap ${ARGS[@]} | wc -l)
	vlg=$(valgrind ./push_swap ${ARGS[@]} 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
	echo -ne "$BOLD_WHITE $ite_big : $RST\t$result\t"
	if [[ $result -le 5500 ]]
	then
		echo -ne $BOLD_GREEN"5/5"$RST		
	elif [[ $result -le 7000 ]]
	then
		echo -ne $GREEN"4/5"$RST		
	elif [[ $result -le 8500 ]]
	then
		echo -ne $YELLOW"3/5"$RST		
	elif [[ $result -le 10000 ]]
	then
		echo -ne $BOLD_YELLOW"2/5"$RST		
	elif [[ $result -le 11500 ]]
	then
		echo -ne $RED"1/5"$RST
	else 
		echo -ne $BOLD_RED"OUT"$RST
	fi
	if [[ $vlg -eq 1 ]]
	then
		echo -e "\t$BACK_GREEN OK $RST"
	else
		echo -e "\t$BACK_RED ERR $RST"
	fi
done




























# function create_args()
# {
# 	max=10
# 	arg=0
# 	res=0
# 	prepare_array=()
# 	ARGS=()

# 	for ((ite=0; ite<$max; ite++))
# 	do
# 		res=$arg
# 		prepare_array+=($res)
# 		let "arg+=1"
# 	done

# 	prepare_array=( $(shuf -e "${prepare_array[@]}") )

# 	for arg in ${prepare_array[@]}
# 	do
# 		sign="$((1 + $RANDOM % 2))"
# 		res=$arg
# 		if [[ $sign == 1 ]]
# 		then
# 			let "res*=(-1)"
# 		fi
# 		ARGS+=($res)
# 	done

# 	echo ${ARGS[@]}
# }