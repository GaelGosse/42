#! /bin/sh

clear

echo -e $BACK_CYAN" ----- START ----- "$RST" $BACK_YELLOW $(date +"%H:%M:%S") $RST\n"



ARGS="1 2 3 4 5"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "1 2 3 4 5 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="1 2 3 5 4"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "1 2 3 5 4 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="1 2 4 3 5"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "1 2 4 3 5 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="1 2 4 5 3"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "1 2 4 5 3 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="1 2 5 3 4"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "1 2 5 3 4 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="1 2 5 4 3"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "1 2 5 4 3 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="1 3 2 4 5"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "1 3 2 4 5 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="1 3 2 5 4"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "1 3 2 5 4 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="1 3 4 2 5"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "1 3 4 2 5 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="1 3 4 5 2"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "1 3 4 5 2 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="1 3 5 2 4"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "1 3 5 2 4 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="1 3 5 4 2"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "1 3 5 4 2 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="1 4 2 3 5"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "1 4 2 3 5 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="1 4 2 5 3"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "1 4 2 5 3 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="1 4 3 2 5"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "1 4 3 2 5 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="1 4 3 5 2"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "1 4 3 5 2 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="1 4 5 2 3"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "1 4 5 2 3 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="1 4 5 3 2"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "1 4 5 3 2 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="1 5 2 3 4"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "1 5 2 3 4 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="1 5 2 4 3"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "1 5 2 4 3 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="1 5 3 2 4"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "1 5 3 2 4 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="1 5 3 4 2"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "1 5 3 4 2 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="1 5 4 2 3"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "1 5 4 2 3 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="1 5 4 3 2"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "1 5 4 3 2 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="2 1 3 4 5"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "2 1 3 4 5 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="2 1 3 5 4"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "2 1 3 5 4 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="2 1 4 3 5"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "2 1 4 3 5 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="2 1 4 5 3"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "2 1 4 5 3 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="2 1 5 3 4"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "2 1 5 3 4 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="2 1 5 4 3"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "2 1 5 4 3 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="2 3 1 4 5"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "2 3 1 4 5 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="2 3 1 5 4"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "2 3 1 5 4 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="2 3 4 1 5"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "2 3 4 1 5 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="2 3 4 5 1"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "2 3 4 5 1 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="2 3 5 1 4"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "2 3 5 1 4 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="2 3 5 4 1"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "2 3 5 4 1 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="2 4 1 3 5"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "2 4 1 3 5 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="2 4 1 5 3"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "2 4 1 5 3 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="2 4 3 1 5"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "2 4 3 1 5 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="2 4 3 5 1"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "2 4 3 5 1 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="2 4 5 1 3"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "2 4 5 1 3 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="2 4 5 3 1"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "2 4 5 3 1 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="2 5 1 3 4"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "2 5 1 3 4 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="2 5 1 4 3"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "2 5 1 4 3 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="2 5 3 1 4"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "2 5 3 1 4 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="2 5 3 4 1"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "2 5 3 4 1 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="2 5 4 1 3"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "2 5 4 1 3 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="2 5 4 3 1"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "2 5 4 3 1 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="3 1 2 4 5"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "3 1 2 4 5 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="3 1 2 5 4"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "3 1 2 5 4 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="3 1 4 2 5"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "3 1 4 2 5 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="3 1 4 5 2"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "3 1 4 5 2 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="3 1 5 2 4"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "3 1 5 2 4 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="3 1 5 4 2"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "3 1 5 4 2 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="3 2 1 4 5"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "3 2 1 4 5 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="3 2 1 5 4"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "3 2 1 5 4 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="3 2 4 1 5"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "3 2 4 1 5 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="3 2 4 5 1"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "3 2 4 5 1 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="3 2 5 1 4"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "3 2 5 1 4 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="3 2 5 4 1"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "3 2 5 4 1 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="3 4 1 2 5"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "3 4 1 2 5 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="3 4 1 5 2"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "3 4 1 5 2 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="3 4 2 1 5"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "3 4 2 1 5 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="3 4 2 5 1"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "3 4 2 5 1 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="3 4 5 1 2"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "3 4 5 1 2 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="3 4 5 2 1"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "3 4 5 2 1 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="3 5 1 2 4"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "3 5 1 2 4 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="3 5 1 4 2"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "3 5 1 4 2 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="3 5 2 1 4"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "3 5 2 1 4 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="3 5 2 4 1"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "3 5 2 4 1 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="3 5 4 1 2"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "3 5 4 1 2 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="3 5 4 2 1"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "3 5 4 2 1 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="4 1 2 3 5"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "4 1 2 3 5 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="4 1 2 5 3"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "4 1 2 5 3 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="4 1 3 2 5"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "4 1 3 2 5 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="4 1 3 5 2"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "4 1 3 5 2 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="4 1 5 2 3"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "4 1 5 2 3 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="4 1 5 3 2"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "4 1 5 3 2 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="4 2 1 3 5"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "4 2 1 3 5 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="4 2 1 5 3"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "4 2 1 5 3 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="4 2 3 1 5"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "4 2 3 1 5 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="4 2 3 5 1"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "4 2 3 5 1 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="4 2 5 1 3"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "4 2 5 1 3 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="4 2 5 3 1"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "4 2 5 3 1 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="4 3 1 2 5"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "4 3 1 2 5 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="4 3 1 5 2"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "4 3 1 5 2 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="4 3 2 1 5"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "4 3 2 1 5 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="4 3 2 5 1"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "4 3 2 5 1 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="4 3 5 1 2"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "4 3 5 1 2 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="4 3 5 2 1"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "4 3 5 2 1 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="4 5 1 2 3"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "4 5 1 2 3 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="4 5 1 3 2"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "4 5 1 3 2 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="4 5 2 1 3"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "4 5 2 1 3 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="4 5 2 3 1"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "4 5 2 3 1 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="4 5 3 1 2"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "4 5 3 1 2 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="4 5 3 2 1"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "4 5 3 2 1 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="5 1 2 3 4"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "5 1 2 3 4 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="5 1 2 4 3"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "5 1 2 4 3 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="5 1 3 2 4"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "5 1 3 2 4 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="5 1 3 4 2"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "5 1 3 4 2 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="5 1 4 2 3"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "5 1 4 2 3 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="5 1 4 3 2"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "5 1 4 3 2 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="5 2 1 3 4"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "5 2 1 3 4 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="5 2 1 4 3"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "5 2 1 4 3 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="5 2 3 1 4"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "5 2 3 1 4 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="5 2 3 4 1"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "5 2 3 4 1 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="5 2 4 1 3"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "5 2 4 1 3 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="5 2 4 3 1"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "5 2 4 3 1 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="5 3 1 2 4"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "5 3 1 2 4 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="5 3 1 4 2"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "5 3 1 4 2 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="5 3 2 1 4"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "5 3 2 1 4 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="5 3 2 4 1"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "5 3 2 4 1 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="5 3 4 1 2"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "5 3 4 1 2 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="5 3 4 2 1"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "5 3 4 2 1 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="5 4 1 2 3"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "5 4 1 2 3 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="5 4 1 3 2"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "5 4 1 3 2 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="5 4 2 1 3"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "5 4 2 1 3 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="5 4 2 3 1"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "5 4 2 3 1 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="5 4 3 1 2"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "5 4 3 1 2 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch

ARGS="5 4 3 2 1"
rm -f *.gch
rm -f */*.gch
# gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h 
result=$(gcc -Wall -Wextra -Werror -o push_swap -g *.c */*.c */*.h *.h && ./push_swap $ARGS | wc -l)
echo -ne "5 4 3 2 1 : \t $result \n"
if [[ $result -le 12 ]]
then
	echo -e "$BACK_GREEN OK $RST"
else
	echo -e "$BACK_RED ERR $RST"
fi
rm -f */*.gch
rm -f *.gch


