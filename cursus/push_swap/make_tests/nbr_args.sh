#! /bin/sh


#	-
####################

#! /bin/sh

echo -e $BACK_CYAN"\n ----- NBR OF ARGS ----- "$RST

ARG="4"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $good);
echo -ne $BACK_WHITE" 00 $RST\t $ARG \t\tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi

ARG="4 7"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $good);
echo -ne $BACK_WHITE" 01 $RST\t $ARG \t\tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi

ARG="4 7 3"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $good);
echo -ne $BACK_WHITE" 02 $RST\t $ARG \t\tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi

ARG="45"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $good);
echo -ne $BACK_WHITE" 03 $RST\t $ARG \t\tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi

ARG="45 79"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $good);
echo -ne $BACK_WHITE" 00 $RST\t $ARG \t\tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi

ARG="45 79 38"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $good);
echo -ne $BACK_WHITE" 05 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi


ARG="451"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $good);
echo -ne $BACK_WHITE" 06 $RST\t $ARG \t\tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi

ARG="451 791"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $good);
echo -ne $BACK_WHITE" 07 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi

ARG="451 791 381"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $good);
echo -ne $BACK_WHITE" 08 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi