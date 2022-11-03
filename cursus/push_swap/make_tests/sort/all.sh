#! /bin/bash

ite_big=0
while [[ $ite_big -lt 5 ]]
do
	# create_args function here
	max=3
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

	./push_swap ${ARGS[@]}
	# echo ${ARGS[@]}
	let "ite_big+=1"
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