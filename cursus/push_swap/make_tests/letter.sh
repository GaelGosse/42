#! /bin/sh


#	-
####################

#! /bin/sh

echo -e $BACK_CYAN"\n ----- LETTER ----- "$RST

ARG="48"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $good);
echo -ne $BACK_WHITE" 10 $RST\t $ARG \t\tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi

ARG="z"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" 01 $RST\t $ARG \t\tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi

ARG="z48"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" 02 $RST\t $ARG \t\tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi

ARG="48z"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" 03 $RST\t $ARG \t\tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi

ARG="4z8"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" 04 $RST\t $ARG \t\tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi



ARG="z48 7"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" 05 $RST\t $ARG \t\tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi

ARG="7 z48"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" 06 $RST\t $ARG \t\tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi

ARG="4z8 7"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" 07 $RST\t $ARG \t\tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi

ARG="7 4z8"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" 08 $RST\t $ARG \t\tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi

ARG="48z 7"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" 09 $RST\t $ARG \t\tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi

ARG="7 48z"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" 10 $RST\t $ARG \t\tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi

ARG="48z 7z"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" 11 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi
