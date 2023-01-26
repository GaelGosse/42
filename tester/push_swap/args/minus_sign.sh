# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    minus_sign.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amarna <amarna@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/20 18:42:51 by amarna            #+#    #+#              #
#    Updated: 2022/12/20 18:43:48 by amarna           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#! /bin/bash


echo -e "\n"$BACK_CYAN" ----- MINUS ----- "$RST"\n"


ARG="48"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo OK); expect=$(echo OK);
echo -ne $BACK_WHITE" 01 $RST\t $ARG \t\tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e "$big_good"
else
	echo -e $big_bad
fi

ARG="-"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo OK); expect=$(echo Error);
echo -ne $BACK_WHITE" 02 $RST\t $ARG \t\tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e "$big_good"
else
	echo -e $big_bad
fi

ARG="-4"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo OK); expect=$(echo OK);
echo -ne $BACK_WHITE" 03 $RST\t $ARG \t\tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e "$big_good"
else
	echo -e $big_bad
fi

ARG="-48"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo OK); expect=$(echo OK);
echo -ne $BACK_WHITE" 04 $RST\t $ARG \t\tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e "$big_good"
else
	echo -e $big_bad
fi

ARG="48-"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo OK); expect=$(echo Error);
echo -ne $BACK_WHITE" 05 $RST\t $ARG \t\tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e "$big_good"
else
	echo -e $big_bad
fi

ARG="4-8"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo OK); expect=$(echo Error);
echo -ne $BACK_WHITE" 06 $RST\t $ARG \t\tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e "$big_good"
else
	echo -e $big_bad
fi



ARG="48 - 7"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo OK); expect=$(echo Error);
echo -ne $BACK_WHITE" 07 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e "$big_good"
else
	echo -e $big_bad
fi

ARG="-48 7"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo OK); expect=$(echo OK);
echo -ne $BACK_WHITE" 08 $RST\t $ARG \t\tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e "$big_good"
else
	echo -e $big_bad
fi

ARG="7 -48"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo OK); expect=$(echo OK);
echo -ne $BACK_WHITE" 09 $RST\t $ARG \t\tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e "$big_good"
else
	echo -e $big_bad
fi

ARG="4-8 7"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo OK); expect=$(echo Error);
echo -ne $BACK_WHITE" 10 $RST\t $ARG \t\tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e "$big_good"
else
	echo -e $big_bad
fi

ARG="7 4-8"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo OK); expect=$(echo Error);
echo -ne $BACK_WHITE" 11 $RST\t $ARG \t\tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e "$big_good"
else
	echo -e $big_bad
fi

ARG="48- 7"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo OK); expect=$(echo Error);
echo -ne $BACK_WHITE" 12 $RST\t $ARG \t\tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e "$big_good"
else
	echo -e $big_bad
fi

ARG="7 48-"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo OK); expect=$(echo Error);
echo -ne $BACK_WHITE" 13 $RST\t $ARG \t\tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e "$big_good"
else
	echo -e $big_bad
fi

ARG="48- 7-"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo OK); expect=$(echo Error);
echo -ne $BACK_WHITE" 14 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e "$big_good"
else
	echo -e $big_bad
fi

ARG="2147483647"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo OK); expect=$(echo OK);
echo -ne $BACK_WHITE" 15 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e "$big_good"
else
	echo -e $big_bad
fi

ARG="-2147483648"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo OK); expect=$(echo OK);
echo -ne $BACK_WHITE" 16 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e "$big_good"
else
	echo -e $big_bad
fi

ARG="2147483648"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo OK); expect=$(echo Error);
echo -ne $BACK_WHITE" 15 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e "$big_good"
else
	echo -e $big_bad
fi

ARG="-2147483649"
output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo OK); expect=$(echo Error);
echo -ne $BACK_WHITE" 16 $RST\t $ARG \tExpect: $expect\tReel: $result\t"
if [[ "$result" == "$expect" ]]
then
	echo -e "$big_good"
else
	echo -e $big_bad
fi
