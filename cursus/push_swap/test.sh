#! /bin/sh

GOOD=$BOLD_GREEN" OK "$RST
BIG_GOOD=$BOLD_GREEN" OK "$RST

BAD=$BOLD_RED"Error"$RST
BIG_BAD=$BOLD_RED"Error "$RST

clear

rm -f *.gch
rm -f */*.gch
gcc -Wall -Wextra -Werror -o push_swap *.c *.h */*.c */*.h 
rm -f *.gch
rm -f */*.gch


#	-
####################
echo -e "----- 4 digits -----\n"

#! /bin/sh



output=$(ARG="45 7 1289 730"; ./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" n*1 $RST\t 4 \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi
output=$(ARG="45 7 1289 730"; ./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" n*2 $RST\t - \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi
output=$(ARG="45 7 1289 730"; ./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $good);
echo -ne $BACK_WHITE" n*3 $RST\t -4 \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi
output=$(ARG="45 7 1289 730"; ./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" n*4 $RST\t 4- \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi


output=$(ARG="45 7 1289 730"; ./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" n*5 $RST\t 4 \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi
output=$(ARG="45 7 1289 730"; ./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" n*6 $RST\t + \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi
output=$(ARG="45 7 1289 730"; ./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $good);
echo -ne $BACK_WHITE" n*7 $RST\t +4 \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi
output=$(ARG="45 7 1289 730"; ./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" n*8 $RST\t 4+ \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi


output=$(ARG="45 7 1289 730"; ./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" n*9 $RST\t 4 \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi
output=$(ARG="45 7 1289 730"; ./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" n*10 $RST\t / \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi
output=$(ARG="45 7 1289 730"; ./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" n*11 $RST\t /4 \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi
output=$(ARG="45 7 1289 730"; ./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" n*12 $RST\t 4/ \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi


output=$(ARG="45 7 1289 730"; ./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" n*13 $RST\t 4a \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi
output=$(ARG="45 7 1289 730"; ./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" n*14 $RST\t a \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi
output=$(ARG="45 7 1289 730"; ./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
echo -ne $BACK_WHITE" n*15 $RST\t a4 \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi
output=$(ARG="45 7 1289 730"; ./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $good);
echo -ne $BACK_WHITE" n*16 $RST\t 4 \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e $big_good
else
	echo -e $big_bad
fi
# # 3 digits
# expect=$GOOD; result=$(./push_swap 74 12 63 | grep Error || echo -e $GOOD); echo -ne $RST" 74 12 63 \t Expect: $expect\t\tReel: $result \t"$RST
# if [[ "$result" == "$expect" ]]; then
# 	echo -e $BIG_GOOD
# else
# 	echo -e $BIG_BAD
# fi
# expect=$GOOD; result=$(./push_swap 74 -12 63 | grep Error || echo -e $GOOD); echo -ne $RST" 74 -12 63 \t Expect: $expect\t\tReel: $result \t"$RST
# if [[ "$result" == "$expect" ]]; then
# 	echo -e $BIG_GOOD
# else
# 	echo -e $BIG_BAD
# fi
# expect=$BAD; result=$(./push_swap 74 12 6-3 | grep Error || echo -e $GOOD); echo -ne $RST" 74 12 6-3 \t Expect: $expect\t\tReel: $result \t"$RST
# if [[ "$result" == "$expect" ]]; then
# 	echo -e $BIG_GOOD
# else
# 	echo -e $BIG_BAD
# fi
# expect=$BAD; result=$(./push_swap 74 a12 63 | grep Error || echo -e $GOOD); echo -ne $RST" 74 a12 63 \t Expect: $expect\t\tReel: $result \t"$RST
# if [[ "$result" == "$expect" ]]; then
# 	echo -e $BIG_GOOD
# else
# 	echo -e $BIG_BAD
# fi
# expect=$GOOD; result=$(./push_swap 74 2 63 | grep Error || echo -e $GOOD); echo -ne $RST" 74 2 63 \t Expect: $expect\t\tReel: $result \t"$RST
# if [[ "$result" == "$expect" ]]; then
# 	echo -e $BIG_GOOD
# else
# 	echo -e $BIG_BAD
# fi
# expect=$BAD; result=$(./push_swap 74 - 63 | grep Error || echo -e $GOOD); echo -ne $RST" 74 - 63 \t Expect: $expect\t\tReel: $result \t"$RST
# if [[ "$result" == "$expect" ]]; then
# 	echo -e $BIG_GOOD
# else
# 	echo -e $BIG_BAD
# fi

# # 2 digits
# expect=$GOOD; result=$(./push_swap 12 63 | grep Error || echo -e $GOOD); echo -ne $RST" 12 63 \t\t Expect: $expect\t\tReel: $result \t"$RST
# if [[ "$result" == "$expect" ]]; then
# 	echo -e $BIG_GOOD
# else
# 	echo -e $BIG_BAD
# fi
# expect=$GOOD; result=$(./push_swap -12 63 | grep Error || echo -e $GOOD); echo -ne $RST" -12 63 \t Expect: $expect\t\tReel: $result \t"$RST
# if [[ "$result" == "$expect" ]]; then
# 	echo -e $BIG_GOOD
# else
# 	echo -e $BIG_BAD
# fi
# expect=$BAD; result=$(./push_swap 12 6-3 | grep Error || echo -e $GOOD); echo -ne $RST" 12 6-3 \t Expect: $expect\t\tReel: $result \t"$RST
# if [[ "$result" == "$expect" ]]; then
# 	echo -e $BIG_GOOD
# else
# 	echo -e $BIG_BAD
# fi
# expect=$BAD; result=$(./push_swap 12 a63 | grep Error || echo -e $GOOD); echo -ne $RST" 12 a63 \t Expect: $expect\t\tReel: $result \t"$RST
# if [[ "$result" == "$expect" ]]; then
# 	echo -e $BIG_GOOD
# else
# 	echo -e $BIG_BAD
# fi
# expect=$BAD; result=$(./push_swap a12 63 | grep Error || echo -e $GOOD); echo -ne $RST" a12 63 \t Expect: $expect\t\tReel: $result \t"$RST
# if [[ "$result" == "$expect" ]]; then
# 	echo -e $BIG_GOOD
# else
# 	echo -e $BIG_BAD
# fi
# expect=$GOOD; result=$(./push_swap 2 63 | grep Error || echo -e $GOOD); echo -ne $RST" 2 63 \t\t Expect: $expect\t\tReel: $result \t"$RST
# if [[ "$result" == "$expect" ]]; then
# 	echo -e $BIG_GOOD
# else
# 	echo -e $BIG_BAD
# fi
# expect=$BAD; result=$(./push_swap 74 63 - | grep Error || echo -e $GOOD); echo -ne $RST" 63 - \t\t Expect: $expect\t\tReel: $result \t"$RST
# if [[ "$result" == "$expect" ]]; then
# 	echo -e $BIG_GOOD
# else
# 	echo -e $BIG_BAD
# fi
# expect=$BAD; result=$(./push_swap 74 - 63 | grep Error || echo -e $GOOD); echo -ne $RST" - 63 \t\t Expect: $expect\t\tReel: $result \t"$RST
# if [[ "$result" == "$expect" ]]; then
# 	echo -e $BIG_GOOD
# else
# 	echo -e $BIG_BAD
# fi
