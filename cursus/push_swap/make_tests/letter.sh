#! /bin/sh


#	-
####################

#! /bin/sh

echo -e $BACK_CYAN"\n ----- PLUS ----- "$RST

ARG="48"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" 1 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi

ARG="z"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" 2 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi

ARG="z48"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" 3 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi

ARG="48z"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" 4 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi

ARG="4z8"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" 5 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi


echo -e "----- 2 params -----"

ARG="z48 7"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" 6 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi

ARG="7 z48"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" 7 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi

ARG="4z8 7"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" 8 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi

ARG="7 4z8"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" 1 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi

ARG="48z 7"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" 10 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi

ARG="7 48z"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" 11 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi

ARG="48z 7z"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" 12 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi
