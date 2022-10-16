#! /bin/sh


#	-
####################

#! /bin/sh

echo -e $BACK_CYAN"\n ----- PLUS ----- "$RST

ARG="48"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" n*5 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi

ARG="+"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" n*6 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi

ARG="+48"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" n*7 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi

ARG="48+"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" n*8 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi

ARG="4+8"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" n*9 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi


echo -e "----- 2 params -----"

ARG="+48 7"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" n*12 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi

ARG="7 +48"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" n*13 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi

ARG="4+8 7"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" n*14 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi

ARG="7 4+8"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" n*15 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi

ARG="48+ 7"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" n*16 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi

ARG="7 48+"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" n*17 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi

ARG="48+ 7+"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" n*18 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi
