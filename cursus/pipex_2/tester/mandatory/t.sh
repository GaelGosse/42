#! /bin/bash

clear


good=$BOLD_GREEN"OK"$RST
bad=$BOLD_RED"Error "$RST

big_good=$BACK_GREEN"  OK   "$RST
big_bad=$BACK_RED" Error "$RST



##### COMPIL #####
gcc -Wall -Wextra -Werror -g3 */*.c *.c */*.h *.h -o pipex
rm -f *.gch */*.gch
chmod 777 pipex

touch xhd.txt
echo "zzz" > xhd.txt

echo -e $CYAN" ----- ----- ----- ----- "$RST" $BACK_YELLOW $(date +"%H:%M:%S") $RST"
echo -e $CYAN"$CMD"$RST"\n"

# valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes  --leak-check=full --show-leak-kinds=all --track-origins=yes 
# valgrind --leak-check=full 
# gdb --args 

# valgrind --leak-check=full --show-leak-kinds=all ./pipex infile "ls" "/usr/bin/grep xhd" outfile
# hide command :	> /dev/null 2>&1

##### TEST #####
echo -e $BOLD_WHITE"name\texec\ttest\tvalgrind $RST"

# 1
> outfile
CMD="./pipex infile \"ls\" \"/usr/bin/grep xhd\" outfile"
vlg=$(valgrind ./pipex $CMD 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
res=$(echo $CMD | bash 2>&1 | grep Error --color=always || echo "good")

echo -ne "good\t"
if [[ $res == "good" ]]
then
	echo -ne $good"\t"
else
	echo -ne $bad"\t"
fi
if [[ 'xhd.txt' == $(cat outfile) ]]
then
	echo -ne $good"\t"
else
	echo -ne $bad"\t"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e $good
else
	echo -e $bad
fi


# 2
> outfile
CMD="./pipex infile \"lxs\" \"/usr/bin/grep xhd\" outfile"
vlg=$(valgrind ./pipex $CMD 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
res=$(echo $CMD | bash 2>&1 | grep Error || echo "good")
# > /dev/null 2>&1

echo -ne "1st X\t"
if [[ $res == "Error" ]]
then
	echo -ne $good"\t"
else
	echo -ne $bad"\t"
fi
if [[ '' == $(cat outfile) ]]
then
	echo -ne $good"\t"
else
	echo -ne $bad"\t"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e $good
else
	echo -e $bad
fi


# 3
> outfile
CMD="./pipex infile \"ls\" \"/usr/bin/gerp xhd\" outfile"
vlg=$(valgrind ./pipex $CMD 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
res=$(echo $CMD | bash 2>&1 | grep Error || echo "good")
# > /dev/null 2>&1

echo -ne "2nd X\t"
if [[ $res == "Error" ]]
then
	echo -ne $good"\t"
else
	echo -ne $bad"\t"
fi
if [[ '' == $(cat outfile) ]]
then
	echo -ne $good"\t"
else
	echo -ne $bad"\t"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e $good
else
	echo -e $bad
fi
