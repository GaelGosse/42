#! /bin/bash

echo -e $BACK_CYAN" ----- SORT BIG ----- "$RST" $BACK_YELLOW $(date +"%H:%M:%S") $RST\n"


rm -f *.gch
rm -f */*.gch
gcc -Wall -Wextra -Werror -o push_swap -g *.c   *.h 
rm -f *.gch
rm -f */*.gch


echo -e "$BOLD_CYAN Already sorted : $RST"

ARGS="-1 2 3 4 5 6 7 8 9 60"
result=$(./push_swap $ARGS)
echo -ne "$ARGS : \t$result"
if [[ $result == "" ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="2147483647"
result=$(./push_swap $ARGS)
echo -ne "$ARGS : \t\t\t$result"
if [[ $result == "" ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="2147483648"
result=$(./push_swap $ARGS)
echo -ne "$ARGS : \t\t$result\t"
if [[ $result == "Error" ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS=""
result=$(./push_swap $ARGS)
echo -ne "EMPTY : \t\t\t$result"
if [[ $result == "" ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS=" "
result=$(./push_swap $ARGS)
echo -ne "SPACE : \t\t\t$result"
if [[ $result == "" ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi


echo -e "\n$BOLD_CYAN 100 : $RST"

ite_big=0
while [[ $ite_big -lt $1 ]]
do
	# create_args function here
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
		# if [[ $sign == 1 ]]
		# then
		# 	let "res*=(-1)"
		# fi
		ARGS+=($res)
	done

	let "ite_big+=1"
	# echo -n ${ARGS[@]}
	result=$(./push_swap ${ARGS[@]} | wc -l)
	echo -ne "$BOLD_WHITE $ite_big : $RST\t$result\t"
	if [[ $result -le 700 ]]
	then
		echo -e $BOLD_GREEN"5/5"$RST		
	elif [[ $result -le 900 ]]
	then
		echo -e $GREEN"4/5"$RST		
	elif [[ $result -le 1100 ]]
	then
		echo -e $YELLOW"3/5"$RST		
	elif [[ $result -le 1300 ]]
	then
		echo -e $BOLD_YELLOW"2/5"$RST		
	elif [[ $result -le 1500 ]]
	then
		echo -e $RED"1/5"$RST
	else 
		echo -e $BOLD_RED"OUT"$RST
	fi
	# echo ${ARGS[@]}
done

echo ""
echo -e "$BOLD_CYAN 500 : $RST"

ite_big=0
while [[ $ite_big -lt $1 ]]
do
	# create_args function here
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
		# if [[ $sign == 1 ]]
		# then
		# 	let "res*=(-1)"
		# fi
		ARGS+=($res)
	done

	let "ite_big+=1"
	# echo -n ${ARGS[@]}
	result=$(./push_swap ${ARGS[@]} | wc -l)
	echo -ne "$BOLD_WHITE $ite_big : $RST\t$result\t"
	if [[ $result -le 5500 ]]
	then
		echo -e $BOLD_GREEN"5/5"$RST		
	elif [[ $result -le 7000 ]]
	then
		echo -e $GREEN"4/5"$RST		
	elif [[ $result -le 8500 ]]
	then
		echo -e $YELLOW"3/5"$RST		
	elif [[ $result -le 10000 ]]
	then
		echo -e $BOLD_YELLOW"2/5"$RST		
	elif [[ $result -le 11500 ]]
	then
		echo -e $RED"1/5"$RST
	else 
		echo -e $BOLD_RED"OUT"$RST
	fi
	# echo ${ARGS[@]}
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