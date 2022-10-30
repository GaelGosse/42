#! /bin/sh

clear

rm -f *.gch
rm -f */*.gch
gcc -Wall -Wextra -Werror -g */*.c */*.h *.c *.h -o push_swap
rm -f *.gch
rm -f */*.gch


SPACE='      '
good=$BOLD_GREEN"OK"$RST
big_good=$BACK_GREEN"  OK   "$RST
bad=$BOLD_RED"Error "$RST
big_bad=$BACK_RED" Error "$RST


number=20
range=10000
ARGS=()
for ((n=0; n<$number; n++))
do
	sign="$((1 + $RANDOM % 2))"
	arg="$((1 + $RANDOM % $range))"
	if [[ $sign == 1 ]]
	then
		let "arg*=(-1)"
	fi
	ARGS+=("$arg")
done
# for value in ${ARGS[@]}; do
# 	echo $value
# done
./push_swap ${ARGS[@]}
echo ${ARGS[@]}

# source make_tests/sort/
 