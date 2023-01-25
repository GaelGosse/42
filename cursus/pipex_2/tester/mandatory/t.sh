#! /bin/bash

clear


good=$BOLD_GREEN"OK"$RST
bad=$BOLD_RED"Error "$RST

big_good=$BACK_GREEN"  OK   "$RST
big_bad=$BACK_RED" Error "$RST



##### COMPIL #####
gcc -Wall -Wextra -Werror -g */*.c *.c */*.h *.h -o pipex
rm -f *.gch */*.gch
chmod 777 pipex

touch xhd.txt
echo "zzz" > xhd.txt

echo -e $CYAN" ----- ----- ----- ----- "$RST" $BACK_YELLOW $(date +"%H:%M:%S") $RST"
echo -e $CYAN"$CMD"$RST"\n"

# valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes  --leak-check=full --show-leak-kinds=all --track-origins=yes 
# gdb --args 

# valgrind --leak-check=full --show-leak-kinds=all ./pipex infile "ls" "/usr/bin/grep xhd" outfile
# hide command :	> /dev/null 2>&1

echo -ne "norminette "
if [ $(norminette | grep -vi OK | wc -l) -eq 0 ]
then
	echo -e $good
else
	echo -e $bad
	echo
	norminette | grep -vi OK
fi
echo

##### TEST #####
echo -e $BOLD_WHITE"name\texec\ttest\tvalgrind $RST"

# 1 everytinhg is OK
> outfile
CMD_1="./pipex infile \"ls\" \"/usr/bin/grep xhd\" outfile"
vlg=$(valgrind $CMD_1 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
res=$(echo $CMD_1 | bash 2>&1 | grep Error --color=always || echo "good")

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
	echo
	valgrind $CMD_1
fi


# 2 wrong first cmd
> outfile
CMD_2="./pipex infile \"lxs\" \"/usr/bin/grep xhd\" outfile"
vlg=$(valgrind $CMD_2 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
res=$(echo $CMD_2 | bash 2>&1 | grep Error || echo "good")
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
	echo
	valgrind $CMD_2
fi


# 3 wrond second cmd
> outfile
CMD_3="./pipex infile \"ls\" \"/usr/bin/gerp xhd\" outfile"
vlg=$(valgrind $CMD_3 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
res=$(echo $CMD_3 | bash 2>&1 | grep Error || echo "good")
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
	echo
	valgrind $CMD_3
fi


# 4 no infileS existed => error message
> outfile
CMD_4="./pipex infiles \"ls\" \"wc -l\" outfile"
vlg=$(valgrind $CMD_4 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
res=$(echo $CMD_4 | bash 2>&1 | grep "No such file" --color=never || echo "bad")
res2=$(echo $CMD_4 | bash 2>&1 | grep "No such file" --color=never || echo "bad")

echo -ne "infile\t"
if [[ $res == "No such file or directory" ]]
then
	echo -ne $good"\t\t"
else
	echo -ne $bad"\t\t"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e $good
else
	echo -e $bad
	echo
	valgrind $CMD_4
fi


# 5 no outfile existed => created
> outfile
rm -f outfiles
CMD_1="./pipex infile \"ls\" \"/usr/bin/grep xhd\" outfiles"
vlg=$(valgrind $CMD_1 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
res=$(echo $CMD_1 | bash 2>&1 | grep Error --color=always || echo "good")

echo -ne "out \t"
if [[ $res == "good" ]]
then
	echo -ne $good"\t"
else
	echo -ne $bad"\t"
fi
if [[ -f "$(pwd)/outfiles" && $(cat outfiles) == 'xhd.txt' ]]
then
	echo -ne $good"\t"
	sleep 1
	rm -f outfiles
else
	echo -ne $bad"\t"
fi
if [[ $vlg -eq 1 ]]
then
	echo -e $good
else
	echo -e $bad
	echo
	valgrind $CMD_5
fi


# 6 
> outfile
CMD_6="./pipex infile \"/usr/bin/grep xhd\" outfile"
vlg=$(valgrind $CMD_6 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
res=$(echo $CMD_6 | bash 2>&1 | grep Error --color=never || echo "good")

echo -ne "miss1\t"
if [[ $res == "Error" ]]
then
	echo -ne $good"\t\t"
else
	echo -ne $bad"\t\t"
fi
if [[ $vlg -eq 3 ]]
then
	echo -e $good
else
	echo -e $bad
	echo
	valgrind $CMD_6
fi

# 6 
> outfile
CMD_6="./pipex infile ls \"/usr/bin/grep xhd\" \"wc -l\" outfile"
vlg=$(valgrind $CMD_6 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
res=$(echo $CMD_6 | bash 2>&1 | grep Error --color=never || echo "good")

echo -ne "over2\t"
if [[ $res == "Error" ]]
then
	echo -ne $good"\t\t"
else
	echo -ne $bad"\t\t"
	echo
	valgrind $CMD_6
fi
if [[ $vlg -eq 1 ]]
then
	echo -e $good
else
	echo -e $bad
	echo
	valgrind $CMD_6
fi

# 7 no env
> outfile
CMD_7="./pipex infile \"ls\" \"/usr/bin/ls\" outfile"
vlg=$(env -i valgrind $CMD_7 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
res=$(echo "env -i $CMD_7" | bash 2>&1 | grep Error --color=always || echo "good")

echo -ne "env -i\t"
if [[ $res != "good" ]]
then
	echo -ne $good"\t"
else
	echo -ne $bad"\t"
fi
if [[ $(cat outfile | wc -l) -ge 1 ]]
then
	echo -ne $good"\t"
else
	echo -ne $bad"\t"
fi
if [[ $vlg -eq 3 ]]
then
	echo -e $good
else
	echo -e $bad
	echo
	echo "env -i valgrind $CMD_7" | bash
fi

# 8 no PATH
> outfile
save=$PATH
PATH=""

CMD_8="./pipex infile \"ls\" \"/usr/bin/ls\" outfile"
vlg=$(/usr/bin/valgrind $CMD_8 2>&1 | /usr/bin/grep "in use at exit: 0 bytes in 0 blocks" | /usr/bin/wc -l)
res=$(/usr/bin/echo $CMD_8 | /usr/bin/bash 2>&1 | /usr/bin/grep "command not found" --color=never || /usr/bin/echo "good")

PATH=$save

echo -ne "noPath\t"
if [[ $res == "command not found" ]]
then
	echo -ne $good"\t"
else
	echo -ne $bad"\t"
fi
if [[ $(cat outfile | wc -l) -ge 1 ]]
then
	echo -ne $good"\t"
else
	echo -ne $bad"\t"
fi
if [[ $vlg -eq 3 ]]
then
	echo -e $good
else
	echo -e $bad
	echo
	echo "valgrind $CMD_8" | bash
fi


# 9 file instead of cmd
> outfile
CMD_9="./pipex infile \"Makefile\" \"/usr/bin/ls\" outfile"
vlg=$(valgrind $CMD_9 2>&1 | grep "in use at exit: 0 bytes in 0 blocks" | wc -l)
res=$(echo $CMD_9 | bash 2>&1 | grep "command not found" --color=never || echo "good")

echo -ne "file\t"
if [[ $res == "command not found" ]]
then
	echo -ne $good"\t"
else
	echo -ne $bad"\t"
fi
if [[ $(cat outfile | wc -l) -ge 1 ]]
then
	echo -ne $good"\t"
else
	echo -ne $bad"\t"
fi
if [[ $vlg -eq 3 ]]
then
	echo -e $good
else
	echo -e $bad
	echo
	echo "valgrind $CMD_9" | bash
fi


if [ -f "$(pwd)/xhd.txt" ]; then
	rm xhd.txt
fi
> outfile
echo