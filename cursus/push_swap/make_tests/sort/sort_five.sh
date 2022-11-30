#! /bin/sh

echo -e $BACK_CYAN" ----- SORT FIVE ----- "$RST" $BACK_YELLOW $(date +"%H:%M:%S") $RST\n"



rm -f *.gch
rm -f */*.gch
gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
rm -f *.gch
rm -f */*.gch

ARGS="1 2 3 4 5"
result=$(./push_swap $ARGS | wc -l)
echo -ne "1 2 3 4 5 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="1 2 3 5 4"
result=$(./push_swap $ARGS | wc -l)
echo -ne "1 2 3 5 4 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="1 2 4 3 5"
result=$(./push_swap $ARGS | wc -l)
echo -ne "1 2 4 3 5 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="1 2 4 5 3"
result=$(./push_swap $ARGS | wc -l)
echo -ne "1 2 4 5 3 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="1 2 5 3 4"
result=$(./push_swap $ARGS | wc -l)
echo -ne "1 2 5 3 4 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="1 2 5 4 3"
result=$(./push_swap $ARGS | wc -l)
echo -ne "1 2 5 4 3 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="1 3 2 4 5"
result=$(./push_swap $ARGS | wc -l)
echo -ne "1 3 2 4 5 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="1 3 2 5 4"
result=$(./push_swap $ARGS | wc -l)
echo -ne "1 3 2 5 4 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="1 3 4 2 5"
result=$(./push_swap $ARGS | wc -l)
echo -ne "1 3 4 2 5 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="1 3 4 5 2"
result=$(./push_swap $ARGS | wc -l)
echo -ne "1 3 4 5 2 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="1 3 5 2 4"
result=$(./push_swap $ARGS | wc -l)
echo -ne "1 3 5 2 4 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="1 3 5 4 2"
result=$(./push_swap $ARGS | wc -l)
echo -ne "1 3 5 4 2 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="1 4 2 3 5"
result=$(./push_swap $ARGS | wc -l)
echo -ne "1 4 2 3 5 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="1 4 2 5 3"
result=$(./push_swap $ARGS | wc -l)
echo -ne "1 4 2 5 3 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="1 4 3 2 5"
result=$(./push_swap $ARGS | wc -l)
echo -ne "1 4 3 2 5 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="1 4 3 5 2"
result=$(./push_swap $ARGS | wc -l)
echo -ne "1 4 3 5 2 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="1 4 5 2 3"
result=$(./push_swap $ARGS | wc -l)
echo -ne "1 4 5 2 3 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="1 4 5 3 2"
result=$(./push_swap $ARGS | wc -l)
echo -ne "1 4 5 3 2 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="1 5 2 3 4"
result=$(./push_swap $ARGS | wc -l)
echo -ne "1 5 2 3 4 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="1 5 2 4 3"
result=$(./push_swap $ARGS | wc -l)
echo -ne "1 5 2 4 3 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="1 5 3 2 4"
result=$(./push_swap $ARGS | wc -l)
echo -ne "1 5 3 2 4 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="1 5 3 4 2"
result=$(./push_swap $ARGS | wc -l)
echo -ne "1 5 3 4 2 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="1 5 4 2 3"
result=$(./push_swap $ARGS | wc -l)
echo -ne "1 5 4 2 3 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="1 5 4 3 2"
result=$(./push_swap $ARGS | wc -l)
echo -ne "1 5 4 3 2 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="2 1 3 4 5"
result=$(./push_swap $ARGS | wc -l)
echo -ne "2 1 3 4 5 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="2 1 3 5 4"
result=$(./push_swap $ARGS | wc -l)
echo -ne "2 1 3 5 4 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="2 1 4 3 5"
result=$(./push_swap $ARGS | wc -l)
echo -ne "2 1 4 3 5 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="2 1 4 5 3"
result=$(./push_swap $ARGS | wc -l)
echo -ne "2 1 4 5 3 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="2 1 5 3 4"
result=$(./push_swap $ARGS | wc -l)
echo -ne "2 1 5 3 4 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="2 1 5 4 3"
result=$(./push_swap $ARGS | wc -l)
echo -ne "2 1 5 4 3 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="2 3 1 4 5"
result=$(./push_swap $ARGS | wc -l)
echo -ne "2 3 1 4 5 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="2 3 1 5 4"
result=$(./push_swap $ARGS | wc -l)
echo -ne "2 3 1 5 4 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="2 3 4 1 5"
result=$(./push_swap $ARGS | wc -l)
echo -ne "2 3 4 1 5 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="2 3 4 5 1"
result=$(./push_swap $ARGS | wc -l)
echo -ne "2 3 4 5 1 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="2 3 5 1 4"
result=$(./push_swap $ARGS | wc -l)
echo -ne "2 3 5 1 4 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="2 3 5 4 1"
result=$(./push_swap $ARGS | wc -l)
echo -ne "2 3 5 4 1 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="2 4 1 3 5"
result=$(./push_swap $ARGS | wc -l)
echo -ne "2 4 1 3 5 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="2 4 1 5 3"
result=$(./push_swap $ARGS | wc -l)
echo -ne "2 4 1 5 3 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="2 4 3 1 5"
result=$(./push_swap $ARGS | wc -l)
echo -ne "2 4 3 1 5 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="2 4 3 5 1"
result=$(./push_swap $ARGS | wc -l)
echo -ne "2 4 3 5 1 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="2 4 5 1 3"
result=$(./push_swap $ARGS | wc -l)
echo -ne "2 4 5 1 3 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="2 4 5 3 1"
result=$(./push_swap $ARGS | wc -l)
echo -ne "2 4 5 3 1 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="2 5 1 3 4"
result=$(./push_swap $ARGS | wc -l)
echo -ne "2 5 1 3 4 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="2 5 1 4 3"
result=$(./push_swap $ARGS | wc -l)
echo -ne "2 5 1 4 3 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="2 5 3 1 4"
result=$(./push_swap $ARGS | wc -l)
echo -ne "2 5 3 1 4 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="2 5 3 4 1"
result=$(./push_swap $ARGS | wc -l)
echo -ne "2 5 3 4 1 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="2 5 4 1 3"
result=$(./push_swap $ARGS | wc -l)
echo -ne "2 5 4 1 3 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="2 5 4 3 1"
result=$(./push_swap $ARGS | wc -l)
echo -ne "2 5 4 3 1 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="3 1 2 4 5"
result=$(./push_swap $ARGS | wc -l)
echo -ne "3 1 2 4 5 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="3 1 2 5 4"
result=$(./push_swap $ARGS | wc -l)
echo -ne "3 1 2 5 4 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="3 1 4 2 5"
result=$(./push_swap $ARGS | wc -l)
echo -ne "3 1 4 2 5 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="3 1 4 5 2"
result=$(./push_swap $ARGS | wc -l)
echo -ne "3 1 4 5 2 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="3 1 5 2 4"
result=$(./push_swap $ARGS | wc -l)
echo -ne "3 1 5 2 4 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="3 1 5 4 2"
result=$(./push_swap $ARGS | wc -l)
echo -ne "3 1 5 4 2 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="3 2 1 4 5"
result=$(./push_swap $ARGS | wc -l)
echo -ne "3 2 1 4 5 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="3 2 1 5 4"
result=$(./push_swap $ARGS | wc -l)
echo -ne "3 2 1 5 4 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="3 2 4 1 5"
result=$(./push_swap $ARGS | wc -l)
echo -ne "3 2 4 1 5 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="3 2 4 5 1"
result=$(./push_swap $ARGS | wc -l)
echo -ne "3 2 4 5 1 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="3 2 5 1 4"
result=$(./push_swap $ARGS | wc -l)
echo -ne "3 2 5 1 4 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="3 2 5 4 1"
result=$(./push_swap $ARGS | wc -l)
echo -ne "3 2 5 4 1 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="3 4 1 2 5"
result=$(./push_swap $ARGS | wc -l)
echo -ne "3 4 1 2 5 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="3 4 1 5 2"
result=$(./push_swap $ARGS | wc -l)
echo -ne "3 4 1 5 2 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="3 4 2 1 5"
result=$(./push_swap $ARGS | wc -l)
echo -ne "3 4 2 1 5 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="3 4 2 5 1"
result=$(./push_swap $ARGS | wc -l)
echo -ne "3 4 2 5 1 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="3 4 5 1 2"
result=$(./push_swap $ARGS | wc -l)
echo -ne "3 4 5 1 2 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="3 4 5 2 1"
result=$(./push_swap $ARGS | wc -l)
echo -ne "3 4 5 2 1 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="3 5 1 2 4"
result=$(./push_swap $ARGS | wc -l)
echo -ne "3 5 1 2 4 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="3 5 1 4 2"
result=$(./push_swap $ARGS | wc -l)
echo -ne "3 5 1 4 2 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="3 5 2 1 4"
result=$(./push_swap $ARGS | wc -l)
echo -ne "3 5 2 1 4 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="3 5 2 4 1"
result=$(./push_swap $ARGS | wc -l)
echo -ne "3 5 2 4 1 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="3 5 4 1 2"
result=$(./push_swap $ARGS | wc -l)
echo -ne "3 5 4 1 2 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="3 5 4 2 1"
result=$(./push_swap $ARGS | wc -l)
echo -ne "3 5 4 2 1 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="4 1 2 3 5"
result=$(./push_swap $ARGS | wc -l)
echo -ne "4 1 2 3 5 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="4 1 2 5 3"
result=$(./push_swap $ARGS | wc -l)
echo -ne "4 1 2 5 3 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="4 1 3 2 5"
result=$(./push_swap $ARGS | wc -l)
echo -ne "4 1 3 2 5 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="4 1 3 5 2"
result=$(./push_swap $ARGS | wc -l)
echo -ne "4 1 3 5 2 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="4 1 5 2 3"
result=$(./push_swap $ARGS | wc -l)
echo -ne "4 1 5 2 3 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="4 1 5 3 2"
result=$(./push_swap $ARGS | wc -l)
echo -ne "4 1 5 3 2 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="4 2 1 3 5"
result=$(./push_swap $ARGS | wc -l)
echo -ne "4 2 1 3 5 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="4 2 1 5 3"
result=$(./push_swap $ARGS | wc -l)
echo -ne "4 2 1 5 3 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="4 2 3 1 5"
result=$(./push_swap $ARGS | wc -l)
echo -ne "4 2 3 1 5 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="4 2 3 5 1"
result=$(./push_swap $ARGS | wc -l)
echo -ne "4 2 3 5 1 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="4 2 5 1 3"
result=$(./push_swap $ARGS | wc -l)
echo -ne "4 2 5 1 3 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="4 2 5 3 1"
result=$(./push_swap $ARGS | wc -l)
echo -ne "4 2 5 3 1 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="4 3 1 2 5"
result=$(./push_swap $ARGS | wc -l)
echo -ne "4 3 1 2 5 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="4 3 1 5 2"
result=$(./push_swap $ARGS | wc -l)
echo -ne "4 3 1 5 2 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="4 3 2 1 5"
result=$(./push_swap $ARGS | wc -l)
echo -ne "4 3 2 1 5 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="4 3 2 5 1"
result=$(./push_swap $ARGS | wc -l)
echo -ne "4 3 2 5 1 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="4 3 5 1 2"
result=$(./push_swap $ARGS | wc -l)
echo -ne "4 3 5 1 2 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="4 3 5 2 1"
result=$(./push_swap $ARGS | wc -l)
echo -ne "4 3 5 2 1 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="4 5 1 2 3"
result=$(./push_swap $ARGS | wc -l)
echo -ne "4 5 1 2 3 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="4 5 1 3 2"
result=$(./push_swap $ARGS | wc -l)
echo -ne "4 5 1 3 2 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="4 5 2 1 3"
result=$(./push_swap $ARGS | wc -l)
echo -ne "4 5 2 1 3 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="4 5 2 3 1"
result=$(./push_swap $ARGS | wc -l)
echo -ne "4 5 2 3 1 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="4 5 3 1 2"
result=$(./push_swap $ARGS | wc -l)
echo -ne "4 5 3 1 2 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="4 5 3 2 1"
result=$(./push_swap $ARGS | wc -l)
echo -ne "4 5 3 2 1 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="5 1 2 3 4"
result=$(./push_swap $ARGS | wc -l)
echo -ne "5 1 2 3 4 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="5 1 2 4 3"
result=$(./push_swap $ARGS | wc -l)
echo -ne "5 1 2 4 3 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="5 1 3 2 4"
result=$(./push_swap $ARGS | wc -l)
echo -ne "5 1 3 2 4 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="5 1 3 4 2"
result=$(./push_swap $ARGS | wc -l)
echo -ne "5 1 3 4 2 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="5 1 4 2 3"
result=$(./push_swap $ARGS | wc -l)
echo -ne "5 1 4 2 3 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="5 1 4 3 2"
result=$(./push_swap $ARGS | wc -l)
echo -ne "5 1 4 3 2 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="5 2 1 3 4"
result=$(./push_swap $ARGS | wc -l)
echo -ne "5 2 1 3 4 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="5 2 1 4 3"
result=$(./push_swap $ARGS | wc -l)
echo -ne "5 2 1 4 3 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="5 2 3 1 4"
result=$(./push_swap $ARGS | wc -l)
echo -ne "5 2 3 1 4 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="5 2 3 4 1"
result=$(./push_swap $ARGS | wc -l)
echo -ne "5 2 3 4 1 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="5 2 4 1 3"
result=$(./push_swap $ARGS | wc -l)
echo -ne "5 2 4 1 3 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="5 2 4 3 1"
result=$(./push_swap $ARGS | wc -l)
echo -ne "5 2 4 3 1 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="5 3 1 2 4"
result=$(./push_swap $ARGS | wc -l)
echo -ne "5 3 1 2 4 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="5 3 1 4 2"
result=$(./push_swap $ARGS | wc -l)
echo -ne "5 3 1 4 2 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="5 3 2 1 4"
result=$(./push_swap $ARGS | wc -l)
echo -ne "5 3 2 1 4 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="5 3 2 4 1"
result=$(./push_swap $ARGS | wc -l)
echo -ne "5 3 2 4 1 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="5 3 4 1 2"
result=$(./push_swap $ARGS | wc -l)
echo -ne "5 3 4 1 2 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="5 3 4 2 1"
result=$(./push_swap $ARGS | wc -l)
echo -ne "5 3 4 2 1 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="5 4 1 2 3"
result=$(./push_swap $ARGS | wc -l)
echo -ne "5 4 1 2 3 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="5 4 1 3 2"
result=$(./push_swap $ARGS | wc -l)
echo -ne "5 4 1 3 2 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="5 4 2 1 3"
result=$(./push_swap $ARGS | wc -l)
echo -ne "5 4 2 1 3 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="5 4 2 3 1"
result=$(./push_swap $ARGS | wc -l)
echo -ne "5 4 2 3 1 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="5 4 3 1 2"
result=$(./push_swap $ARGS | wc -l)
echo -ne "5 4 3 1 2 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi

ARGS="5 4 3 2 1"
result=$(./push_swap $ARGS | wc -l)
echo -ne "5 4 3 2 1 : \t $result \t"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
