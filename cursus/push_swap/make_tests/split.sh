#! /bin/sh




text=""
text="${text}:45"
text="${text}:-45"
text="${text}:4-5"
text="${text}:45-"
text="${text}:-"
IFS=':'
read -a strarr <<< "$text"
echo -e "length: ${#strarr[*]} \n"
for ARG in "${strarr[@]}";
do
	echo "$ARG"
	output=$(./push_swap $ARG); result=$(echo -e $output | grep Error || echo -e $good); expect=$(echo -e $bad);
	echo -ne $BACK_WHITE" n*1 $RST\t 4 \tExpect: $expect\tReel: $result\t"
	if [[ "$result" == "$expect" ]]
	then
		echo -e $big_good
	else
		echo -e $big_bad
	fi
done
