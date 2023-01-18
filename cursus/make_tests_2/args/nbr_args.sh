#! /bin/bash


#	-
####################

#! /bin/bash

echo -e "\n"$BACK_CYAN" ----- NBR OF ARGS ----- "$RST"\n"

ARG="4"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo OK); expect=$(echo OK);
echo -ne $BACK_WHITE" 01 $RST\t $ARG \t\tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e "$big_good"
else
	echo -e $big_bad
fi

ARG="4 7"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo OK); expect=$(echo OK);
echo -ne $BACK_WHITE" 02 $RST\t $ARG \t\tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e "$big_good"
else
	echo -e $big_bad
fi

ARG="4 4"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo OK); expect=$(echo Error);
echo -ne $BACK_WHITE" 03 $RST\t $ARG \t\tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e "$big_good"
else
	echo -e $big_bad
fi

ARG="4- 4-"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo OK); expect=$(echo Error);
echo -ne $BACK_WHITE" 04 $RST\t $ARG \t\tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e "$big_good"
else
	echo -e $big_bad
fi

ARG="-4 -4"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo OK); expect=$(echo Error);
echo -ne $BACK_WHITE" 05 $RST\t $ARG \t\tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e "$big_good"
else
	echo -e $big_bad
fi

ARG="4 7 3"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo OK); expect=$(echo OK);
echo -ne $BACK_WHITE" 06 $RST\t $ARG \t\tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e "$big_good"
else
	echo -e $big_bad
fi

ARG="45"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo OK); expect=$(echo OK);
echo -ne $BACK_WHITE" 07 $RST\t $ARG \t\tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e "$big_good"
else
	echo -e $big_bad
fi

ARG="45 79"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo OK); expect=$(echo OK);
echo -ne $BACK_WHITE" 08 $RST\t $ARG \t\tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e "$big_good"
else
	echo -e $big_bad
fi


ARG="45 45"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo OK); expect=$(echo Error);
echo -ne $BACK_WHITE" 09 $RST\t $ARG \t\tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e "$big_good"
else
	echo -e $big_bad
fi


ARG="4-5 4-5"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo OK); expect=$(echo Error);
echo -ne $BACK_WHITE" 10 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e "$big_good"
else
	echo -e $big_bad
fi


ARG="-45 -45"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo OK); expect=$(echo Error);
echo -ne $BACK_WHITE" 11 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e "$big_good"
else
	echo -e $big_bad
fi

ARG="45 79 38"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo OK); expect=$(echo OK);
echo -ne $BACK_WHITE" 12 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e "$big_good"
else
	echo -e $big_bad
fi


ARG="451"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo OK); expect=$(echo OK);
echo -ne $BACK_WHITE" 13 $RST\t $ARG \t\tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e "$big_good"
else
	echo -e $big_bad
fi

ARG="451 791"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo OK); expect=$(echo OK);
echo -ne $BACK_WHITE" 14 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e "$big_good"
else
	echo -e $big_bad
fi

ARG="451 451"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo OK); expect=$(echo Error);
echo -ne $BACK_WHITE" 15 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e "$big_good"
else
	echo -e $big_bad
fi


ARG="-451 -451"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo OK); expect=$(echo Error);
echo -ne $BACK_WHITE" 16 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e "$big_good"
else
	echo -e $big_bad
fi

ARG="4-51 4-51"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo OK); expect=$(echo Error);
echo -ne $BACK_WHITE" 17 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e "$big_good"
else
	echo -e $big_bad
fi


ARG="451 791 381"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo OK); expect=$(echo OK);
echo -ne $BACK_WHITE" 18 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e "$big_good"
else
	echo -e $big_bad
fi
