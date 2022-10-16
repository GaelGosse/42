#! /bin/sh


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


# echo -ne "\n"$BACK_WHITE" n* 1 "$RST"\t"
# if ./push_swap 74 12 99 - | grep -q Error ; then
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "74 12 99 -\t\tExpect: $bad\tReel:$(./push_swap 74 12 99 - | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "74 12 99 -\t\tExpect: $bad\tReel:$(./push_swap 74 12 99 - | grep Error || echo -e $good)"
# fi

# echo -ne "\n"$BACK_WHITE" n* 2 "$RST"\t"
# if ./push_swap 74 12 99 -63 | grep -q Error ; then
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "74 12 99 -63\tExpect: $good\tReel:$(./push_swap 74 12 99 -63 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "74 12 99 -63\tExpect: $good\tReel:$(./push_swap 74 12 99 -63 | grep Error || echo -e $good)"
# fi

# echo -ne "\n"$BACK_WHITE" n* 3 "$RST"\t"
# if ./push_swap 74 12 99 6-3 | grep -q Error ; then
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "74 12 99 6-3 \tExpect: $bad\tReel:$(./push_swap 74 12 99 6-3 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "74 12 99 6-3 \tExpect: $bad\tReel:$(./push_swap 74 12 99 6-3 | grep Error || echo -e $good)"
# fi

# echo -ne "\n"$BACK_WHITE" n* 4 "$RST"\t"
# if ./push_swap 74 12 99 63- | grep -q Error ; then
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "74 12 99 63- \tExpect: $bad\tReel:$(./push_swap 74 12 99 63- | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "74 12 99 63- \tExpect: $bad\tReel:$(./push_swap 74 12 99 63- | grep Error || echo -e $good)"
# fi


# echo -ne "\n"$BACK_WHITE" n* 5 "$RST"\t"
# if ./push_swap 74 12 - 63 | grep -q Error ; then
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "74 12 - 63\t\tExpect: $bad\tReel:$(./push_swap 74 12 - 63 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "74 12 - 63\t\tExpect: $bad\tReel:$(./push_swap 74 12 - 63 | grep Error || echo -e $good)"
# fi

# echo -ne "\n"$BACK_WHITE" n* 6 "$RST"\t"
# if ./push_swap 74 12 -99 63 | grep -q Error ; then
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "74 12 -99 63\tExpect: $good\tReel:$(./push_swap 74 12 -99 63 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "74 12 -99 63\tExpect: $good\tReel:$(./push_swap 74 12 -99 63 | grep Error || echo -e $good)"
# fi

# echo -ne "\n"$BACK_WHITE" n* 7 "$RST"\t"
# if ./push_swap 74 12 9-9 63 | grep -q Error ; then
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "74 12 9-9 63\tExpect: $bad\tReel:$(./push_swap 74 12 9-9 63 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "74 12 9-9 63\tExpect: $bad\tReel:$(./push_swap 74 12 9-9 63 | grep Error || echo -e $good)"
# fi

# echo -ne "\n"$BACK_WHITE" n* 8 "$RST"\t"
# if ./push_swap 74 12 99- 63 | grep -q Error ; then
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "74 12 99- 63\tExpect: $bad\tReel:$(./push_swap 74 12 99- 63 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "74 12 99- 63\tExpect: $bad\tReel:$(./push_swap 74 12 99- 63 | grep Error || echo -e $good)"
# fi


# echo -ne "\n"$BACK_WHITE" n* 9 "$RST"\t"
# if ./push_swap 74 - 99 63 | grep -q Error ; then
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "74 - 99 63\t\tExpect: $bad\tReel:$(./push_swap 74 - 99 63 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "74 - 99 63\t\tExpect: $bad\tReel:$(./push_swap 74 - 99 63 | grep Error || echo -e $good)"
# fi

# echo -ne "\n"$BACK_WHITE" n* 10 "$RST"\t"
# if ./push_swap 74 -12 99 63 | grep -q Error ; then
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "74 -12 99 63\tExpect: $good\tReel:$(./push_swap 74 -12 99 63 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "74 -12 99 63\tExpect: $good\tReel:$(./push_swap 74 -12 99 63 | grep Error || echo -e $good)"
# fi

# echo -ne "\n"$BACK_WHITE" n* 11 "$RST"\t"
# if ./push_swap 74 1-2 99 63 | grep -q Error ; then
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "74 1-2 99 63\tExpect: $bad\tReel:$(./push_swap 74 1-2 99 63 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "74 1-2 99 63\tExpect: $bad\tReel:$(./push_swap 74 1-2 99 63 | grep Error || echo -e $good)"
# fi

# echo -ne "\n"$BACK_WHITE" n* 12 "$RST"\t"
# if ./push_swap 74 12- 99 63 | grep -q Error ; then
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "74 12- 99 63\tExpect: $bad\tReel:$(./push_swap 74 12- 99 63 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "74 12- 99 63\tExpect: $bad\tReel:$(./push_swap 74 12- 99 63 | grep Error || echo -e $good)"
# fi


# echo -ne "\n"$BACK_WHITE" n* 13 "$RST"\t"
# if ./push_swap - 12 99 63 | grep -q Error ; then
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "- 12 99 63\t\tExpect: $bad\tReel:$(./push_swap - 12 99 63 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "- 12 99 63\t\tExpect: $bad\tReel:$(./push_swap - 12 99 63 | grep Error || echo -e $good)"
# fi

# echo -ne "\n"$BACK_WHITE" n* 14 "$RST"\t"
# if ./push_swap -74 12 99 63 | grep -q Error ; then
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "-74 12 99 63\tExpect: $good\tReel:$(./push_swap -74 12 99 63 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "-74 12 99 63\tExpect: $good\tReel:$(./push_swap -74 12 99 63 | grep Error || echo -e $good)"
# fi

# echo -ne "\n"$BACK_WHITE" n* 15 "$RST"\t"
# if ./push_swap 7-4 12 99 63 | grep -q Error ; then
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "7-4 12 99 63\tExpect: $bad\tReel:$(./push_swap 7-4 12 99 63 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "7-4 12 99 63\tExpect: $bad\tReel:$(./push_swap 7-4 12 99 63 | grep Error || echo -e $good)"
# fi

# echo -ne "\n"$BACK_WHITE" n* 16 "$RST"\t"
# if ./push_swap 74- 12 99 63 | grep -q Error ; then
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "74- 12 99 63\tExpect: $bad\tReel:$(./push_swap 74- 12 99 63 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "74- 12 99 63\tExpect: $bad\tReel:$(./push_swap 74- 12 99 63 | grep Error || echo -e $good)"
# fi



# #	+
# ####################
# echo -ne "\n"$BACK_WHITE" n* 17 "$RST"\t"
# if ./push_swap 74 12 99 + | grep -q Error ; then
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "74 12 99 + \tExpect: $bad\tReel:$(./push_swap 74 12 99 + | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "74 12 99 + \tExpect: $bad\tReel:$(./push_swap 74 12 99 + | grep Error || echo -e $good)"
# fi

# echo -ne "\n"$BACK_WHITE" n* 18 "$RST"\t"
# if ./push_swap 74 12 99 +63 | grep -q Error ; then
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "74 12 99 +63\tExpect: $good\tReel:$(./push_swap 74 12 99 +63 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "74 12 99 +63\tExpect: $good\tReel:$(./push_swap 74 12 99 +63 | grep Error || echo -e $good)"
# fi

# echo -ne "\n"$BACK_WHITE" n* 19 "$RST"\t"
# if ./push_swap 74 12 99 6+3 | grep -q Error ; then
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "74 12 99 6+3 \tExpect: $bad\tReel:$(./push_swap 74 12 99 6+3 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "74 12 99 6+3 \tExpect: $bad\tReel:$(./push_swap 74 12 99 6+3 | grep Error || echo -e $good)"
# fi

# echo -ne "\n"$BACK_WHITE" n* 20 "$RST"\t"
# if ./push_swap 74 12 99 63+ | grep -q Error ; then
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "74 12 99 63+ \tExpect: $bad\tReel:$(./push_swap 74 12 99 63+ | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "74 12 99 63+ \tExpect: $bad\tReel:$(./push_swap 74 12 99 63+ | grep Error || echo -e $good)"
# fi


# echo -ne "\n"$BACK_WHITE" n* 21 "$RST"\t"
# if ./push_swap 74 12 + 63 | grep -q Error ; then
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "74 12 + 63\t\tExpect: $bad\tReel:$(./push_swap 74 12 + 63 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "74 12 + 63\t\tExpect: $bad\tReel:$(./push_swap 74 12 + 63 | grep Error || echo -e $good)"
# fi

# echo -ne "\n"$BACK_WHITE" n* 22 "$RST"\t"
# if ./push_swap 74 12 +99 63 | grep -q Error ; then
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "74 12 +99 63\tExpect: $good\tReel:$(./push_swap 74 12 +99 63 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "74 12 +99 63\tExpect: $good\tReel:$(./push_swap 74 12 +99 63 | grep Error || echo -e $good)"
# fi

# echo -ne "\n"$BACK_WHITE" n* 23 "$RST"\t"
# if ./push_swap 74 12 9+9 63 | grep -q Error ; then
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "74 12 9+9 63\tExpect: $bad\tReel:$(./push_swap 74 12 9+9 63 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "74 12 9+9 63\tExpect: $bad\tReel:$(./push_swap 74 12 9+9 63 | grep Error || echo -e $good)"
# fi

# echo -ne "\n"$BACK_WHITE" n* 24 "$RST"\t"
# if ./push_swap 74 12 99+ 63 | grep -q Error ; then
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "74 12 99+ 63\tExpect: $bad\tReel:$(./push_swap 74 12 99+ 63 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "74 12 99+ 63\tExpect: $bad\tReel:$(./push_swap 74 12 99+ 63 | grep Error || echo -e $good)"
# fi


# echo -ne "\n"$BACK_WHITE" n* 25 "$RST"\t"
# if ./push_swap 74 + 99 63 | grep -q Error ; then
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "74 + 99 63\t\tExpect: $bad\tReel:$(./push_swap 74 + 99 63 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "74 + 99 63\t\tExpect: $bad\tReel:$(./push_swap 74 + 99 63 | grep Error || echo -e $good)"
# fi

# echo -ne "\n"$BACK_WHITE" n* 26 "$RST"\t"
# if ./push_swap 74 +12 99 63 | grep -q Error ; then
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "74 +12 99 63\tExpect: $good\tReel:$(./push_swap 74 +12 99 63 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "74 +12 99 63\tExpect: $good\tReel:$(./push_swap 74 +12 99 63 | grep Error || echo -e $good)"
# fi

# echo -ne "\n"$BACK_WHITE" n* 27 "$RST"\t"
# if ./push_swap 74 1+2 99 63 | grep -q Error ; then
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "74 1+2 99 63\tExpect: $bad\tReel:$(./push_swap 74 1+2 99 63 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "74 1+2 99 63\tExpect: $bad\tReel:$(./push_swap 74 1+2 99 63 | grep Error || echo -e $good)"
# fi

# echo -ne "\n"$BACK_WHITE" n* 28 "$RST"\t"
# if ./push_swap 74 12+ 99 63 | grep -q Error ; then
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "74 12+ 99 63\tExpect: $bad\tReel:$(./push_swap 74 12+ 99 63 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "74 12+ 99 63\tExpect: $bad\tReel:$(./push_swap 74 12+ 99 63 | grep Error || echo -e $good)"
# fi


# echo -ne "\n"$BACK_WHITE" n* 29 "$RST"\t"
# if ./push_swap + 12 99 63 | grep -q Error ; then
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "+ 12 99 63\t\tExpect: $bad\tReel:$(./push_swap + 12 99 63 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "+ 12 99 63\t\tExpect: $bad\tReel:$(./push_swap + 12 99 63 | grep Error || echo -e $good)"
# fi

# echo -ne "\n"$BACK_WHITE" n* 30 "$RST"\t"
# if ./push_swap +74 12 99 63 | grep -q Error ; then
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "+74 12 99 63\tExpect: $good\tReel:$(./push_swap +74 12 99 63 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "+74 12 99 63\tExpect: $good\tReel:$(./push_swap +74 12 99 63 | grep Error || echo -e $good)"
# fi

# echo -ne "\n"$BACK_WHITE" n* 31 "$RST"\t"
# if ./push_swap 7+4 12 99 63 | grep -q Error ; then
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "7+4 12 99 63\tExpect: $bad\tReel:$(./push_swap 7+4 12 99 63 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "7+4 12 99 63\tExpect: $bad\tReel:$(./push_swap 7+4 12 99 63 | grep Error || echo -e $good)"
# fi

# echo -ne "\n"$BACK_WHITE" n* 32 "$RST"\t"
# if ./push_swap 74+ 12 99 63 | grep -q Error ; then
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "74+ 12 99 63\tExpect: $bad\tReel:$(./push_swap 74+ 12 99 63 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "74+ 12 99 63\tExpect: $bad\tReel:$(./push_swap 74+ 12 99 63 | grep Error || echo -e $good)"
# fi



# #	letter
# ####################
# echo -ne "\n"$BACK_WHITE" n* 33 "$RST"\t"
# if ./push_swap 74 12 99 a | grep -q Error ; then
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "74 12 99 a \tExpect: $bad\tReel:$(./push_swap 74 12 99 a | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "74 12 99 a \tExpect: $bad\tReel:$(./push_swap 74 12 99 a | grep Error || echo -e $good)"
# fi

# echo -ne "\n"$BACK_WHITE" n* 34 "$RST"\t"
# if ./push_swap 74 12 99 a 63 | grep -q Error ; then
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "74 12 99 a 63\tExpect: $bad\tReel:$(./push_swap 74 12 99 a 63 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "74 12 99 a 63\tExpect: $bad\tReel:$(./push_swap 74 12 99 a 63 | grep Error || echo -e $good)"
# fi

# echo -ne "\n"$BACK_WHITE" n* 35 "$RST"\t"
# if ./push_swap 74 12 99 6 a3 | grep -q Error ; then
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "74 12 99 6 a3\tExpect: $bad\tReel:$(./push_swap 74 12 99 6 a3 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "74 12 99 6 a3\tExpect: $bad\tReel:$(./push_swap 74 12 99 6 a3 | grep Error || echo -e $good)"
# fi

# echo -ne "\n"$BACK_WHITE" n* 36 "$RST"\t"
# if ./push_swap 74 12 99 63a | grep -q Error ; then
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "74 12 99 63a\tExpect: $bad\tReel:$(./push_swap 74 12 99 63a | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "74 12 99 63a\tExpect: $bad\tReel:$(./push_swap 74 12 99 63a | grep Error || echo -e $good)"
# fi


# echo -ne "\n"$BACK_WHITE" n* 37 "$RST"\t"
# if ./push_swap 74 12 a 63 | grep -q Error ; then
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "74 12 a 63\t\tExpect: $bad\tReel:$(./push_swap 74 12 a 63 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "74 12 a 63\t\tExpect: $bad\tReel:$(./push_swap 74 12 a 63 | grep Error || echo -e $good)"
# fi

# echo -ne "\n"$BACK_WHITE" n* 38 "$RST"\t"
# if ./push_swap 74 12 a99 63 | grep -q Error ; then
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "74 12 a99 63\tExpect: $bad\tReel:$(./push_swap 74 12 a99 63 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "74 12 a99 63\tExpect: $bad\tReel:$(./push_swap 74 12 a99 63 | grep Error || echo -e $good)"
# fi

# echo -ne "\n"$BACK_WHITE" n* 39 "$RST"\t"
# if ./push_swap 74 12 9a9 63 | grep -q Error ; then
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "74 12 9a9 63\tExpect: $bad\tReel:$(./push_swap 74 12 9a9 63 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "74 12 9a9 63\tExpect: $bad\tReel:$(./push_swap 74 12 9a9 63 | grep Error || echo -e $good)"
# fi

# echo -ne "\n"$BACK_WHITE" n* 40 "$RST"\t"
# if ./push_swap 74 12 99a 63 | grep -q Error ; then
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "74 12 99a 63\tExpect: $bad\tReel:$(./push_swap 74 12 99a 63 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "74 12 99a 63\tExpect: $bad\tReel:$(./push_swap 74 12 99a 63 | grep Error || echo -e $good)"
# fi


# echo -ne "\n"$BACK_WHITE" n* 41 "$RST"\t"
# if ./push_swap 74 a 99 63 | grep -q Error ; then
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "74 a 99 63\t\tExpect: $bad\tReel:$(./push_swap 74 a 99 63 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "74 a 99 63\t\tExpect: $bad\tReel:$(./push_swap 74 a 99 63 | grep Error || echo -e $good)"
# fi

# echo -ne "\n"$BACK_WHITE" n* 42 "$RST"\t"
# if ./push_swap 74 a12 99 63 | grep -q Error ; then
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "74 a12 99 63\tExpect: $bad\tReel:$(./push_swap 74 a12 99 63 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "74 a12 99 63\tExpect: $bad\tReel:$(./push_swap 74 a12 99 63 | grep Error || echo -e $good)"
# fi

# echo -ne "\n"$BACK_WHITE" n* 43 "$RST"\t"
# if ./push_swap 74 1a2 99 63 | grep -q Error ; then
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "74 1a2 99 63\tExpect: $bad\tReel:$(./push_swap 74 1a2 99 63 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "74 1a2 99 63\tExpect: $bad\tReel:$(./push_swap 74 1a2 99 63 | grep Error || echo -e $good)"
# fi

# echo -ne "\n"$BACK_WHITE" n* 44 "$RST"\t"
# if ./push_swap 74 12a 99 63 | grep -q Error ; then
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "74 12a 99 63\tExpect: $bad\tReel:$(./push_swap 74 12a 99 63 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "74 12a 99 63\tExpect: $bad\tReel:$(./push_swap 74 12a 99 63 | grep Error || echo -e $good)"
# fi


# echo -ne "\n"$BACK_WHITE" n* 45 "$RST"\t"
# if ./push_swap a 12 99 63 | grep -qi Error ; then
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "a 12 99 63\t\tExpect: $bad\tReel:$(./push_swap a 12 99 63 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "a 12 99 63\t\tExpect: $bad\tReel:$(./push_swap a 12 99 63 | grep Error || echo -e $good)"
# fi

# echo -ne "\n"$BACK_WHITE" n* 46 "$RST"\t"
# if ./push_swap a74 12 99 63 | grep -q Error ; then
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "a74 12 99 63\tExpect: $bad\tReel:$(./push_swap a74 12 99 63 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "a74 12 99 63\tExpect: $bad\tReel:$(./push_swap a74 12 99 63 | grep Error || echo -e $good)"
# fi

# echo -ne "\n"$BACK_WHITE" n* 47 "$RST"\t"
# if ./push_swap 7a4 12 99 63 | grep -q Error ; then
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "7a4 12 99 63\tExpect: $bad\tReel:$(./push_swap 7a4 12 99 63 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "7a4 12 99 63\tExpect: $bad\tReel:$(./push_swap 7a4 12 99 63 | grep Error || echo -e $good)"
# fi

# echo -ne "\n"$BACK_WHITE" n* 48 "$RST"\t"
# if ./push_swap 74a 12 99 63 | grep -q Error ; then
# 	echo -ne $BACK_GREEN" OK "$RST" "
# 	echo -e "74a 12 99 63\tExpect: $bad\tReel:$(./push_swap 74a 12 99 63 | grep Error || echo -e $good)"
# else
# 	echo -ne $BACK_RED" Error "$RST" "
# 	echo -e "74a 12 99 63\tExpect: $bad\tReel:$(./push_swap 74a 12 99 63 | grep Error || echo -e $good)"
# fi
