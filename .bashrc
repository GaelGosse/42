
#!/bin/bash
# lite
export BLACK="\033[0;30m"
export RED="\033[0;31m"
export GREEN="\033[0;32m"
export YELLOW="\033[0;33m"
export BLUE="\033[0;34m"
export PURPLE="\033[0;35m"
export CYAN="\033[0;36m"
export WHITE="\033[0;37m"

# underline
export UNDER_BLACK="\033[4;30m"
export UNDER_RED="\033[4;31m"
export UNDER_GREEN="\033[4;32m"
export UNDER_YELLOW="\033[4;33m"
export UNDER_BLUE="\033[4;34m"
export UNDER_PURPLE="\033[4;35m"
export UNDER_CYAN="\033[4;36m"
export UNDER_WHITE="\033[4;37m"

# bold color
export BOLD_BLACK="\033[1;30m"
export BOLD_RED="\033[1;31m"
export BOLD_GREEN="\033[1;32m"
export BOLD_YELLOW="\033[1;33m"
export BOLD_BLUE="\033[1;34m"
export BOLD_PURPLE="\033[1;35m"
export BOLD_CYAN="\033[1;36m"
export BOLD_WHITE="\033[1;37m"

# background
export BACK_BLACK="\033[0;40m"
export BACK_RED="\033[0;41;30m"
export BACK_GREEN="\033[0;42;30m"
export BACK_YELLOW="\033[0;43;30m"
export BACK_BLUE="\033[0;44;30m"
export BACK_PURPLE="\033[0;45;37m"
export BACK_CYAN="\033[0;46;30m"
export BACK_WHITE="\033[0;47;30m"

# bold & background
export BOLD_BACK_BLACK="\033[1;40m"
export BOLD_BACK_RED="\033[1;41;30m"
export BOLD_BACK_GREEN="\033[1;42;30m"
export BOLD_BACK_YELLOW="\033[1;43;30m"
export BOLD_BACK_BLUE="\033[1;44;30m"
export BOLD_BACK_PURPLE="\033[1;45;37m"
export BOLD_BACK_CYAN="\033[1;46;30m"
export BOLD_BACK_WHITE="\033[1;47;30m"

export RESET="\033[0m"
export RST="\033[0m"

PS1="$> "
PS1="$BOLD_CYAN┌───── $RST$BOLD_YELLOW\t$RST $CYAN$PWD$RST $BOLD_BACK_CYAN[\u$BACK_CYAN @ $BOLD_BACK_CYAN\h]$RST $BOLD_WHITE \W$RST\n$BOLD_CYAN└─ ♠$RST "
alias norm='norminette | grep -vi ok'
alias gcw='gcc -Wall -Wextra -Werror -g'
alias gcl='git clone'
alias ..='cd ..'
alias c='clear'
alias l='ls'
alias grep='grep --color=always'

SLEEP=4

# alias norminette='norminette -R CheckForbiddenSourceHeader'
alias norm='norminette | grep -vi ok'
# alias norminette='norminette | awk '\''{gsub(/OK/,"\033[1;32mOK\033[0m");}1'\'' | awk '\''{gsub(/Error!/,"\033[1;31mError!\033[0m");}1'\'
alias gcw='gcc -Wall -Wextra -Werror -g'
alias out='./a.out'

alias gcl='git clone'

alias ..='cd ..'
alias c='clear'
alias l='ls'
alias grep='grep --color=always'
alias low=' xrandr --output HDMI-2 --brightness 0.5'
alias mid=' xrandr --output HDMI-2 --brightness 0.7'
alias high=' xrandr --output HDMI-2 --brightness 0.9'

# alias set_rc='cp -f ~/42/.shortcut ~/.'
# alias get_rc='cp -f ~/.shortcut ~/42/.'

shell_name=$(ps -p $$ | tail -n 1 | awk '{print $4}')
shell_name=$(ps -ef | grep $$ | grep -v grep | head -1 | awk '{print $8}')
CC="gcc -Wall -Wextra -Werror -o push_swap"
input_file="./push_swap"

# function cfg()
# {
# 	code ~/42/.shortcut
# 	# a=$(pwd)
# 	# cd ~/42 && code 42/.shortcut
# 	# cd $a
# }

function brgt()
{
	LEVEL=$1
	if [[ $LEVEL -gt 100 ]]; then
		echo -e $SYNTAX;
		exit 1;
	fi

	if [[ $LEVEL -lt 0 ]]; then
		echo -e $SYNTAX;
		exit 1;
	fi
	brightness_level="$(( LEVEL / 100 )).$(( LEVEL % 100 ))"
	screenname=$(xrandr | grep " connected" | cut -f1 -d" ")
	echo "$(xrandr --output $screenname --brightness $brightness_level)"
	# echo -e "[info]: Screen Brightness level set to" $LEVEL"%"
	# xrandr --output HDMI-2 --brightness 0.7
}
function brightn()
{
	while true;
	do
		low
	done
}

function cfg()
{
	if [[ $shell_name == "zsh" ]];
	then
		if [ -f "/mnt/nfs/homes/ggosse/.zshrc" ]; then
			code ~/.zshrc
		fi
		if [ -f "/home/gael/.zshrc" ]; then
			code ~/.zshrc
		fi
	fi
	if [[ $shell_name == "bash" ]];
	then
		if [ -f "/mnt/nfs/homes/ggosse/.bashrc" ]; then
			code ~/.bashrc
		fi
		if [ -f "/home/gael/.bashrc" ]; then
			code ~/.bashrc
		fi
	fi
	# code ~/42/.shortcut
}

function start()
{
	if [[ $shell_name == "zsh" ]];
	then
		if [ -f "/mnt/nfs/homes/ggosse/.zshrc" ]; then
			source ~/.zshrc
			echo -e $BACK_GREEN" ZSH is restarted "$RST
		fi
		if [ -f "/home/gael/.zshrc" ]; then
			source ~/.zshrc
			echo -e $BACK_GREEN" ZSH is restarted "$RST
		fi
	fi
	if [[ $shell_name == "bash" ]];
	then
		if [ -f "/mnt/nfs/homes/ggosse/.bashrc" ]; then
			source ~/.bashrc
			echo -e $BACK_GREEN" BASH is restarted "$RST
		fi
		if [ -f "/home/gael/.bashrc" ]; then
			source ~/.bashrc
			echo -e $BACK_GREEN" BASH is restarted "$RST
		fi
	fi
}

function print_title()
{
	escp="\e["
	wrt=";3"
	echo -e $escp"2"$wrt$2"m>"$escp"0"$wrt$2"m>"$escp"1"$wrt$2"m>" $1 $escp"1"$wrt$2"m<"$escp"0"$wrt$2"m<"$escp"2"$wrt$2"m<$RST"
	# echo -e "\e[2;3$2m"">""\e[0;3$2m"">""\e[1;3$2m"">" $1 "\e[1;3$2m""<""\e[0;3$2m""<""\e[2;3$2m""<$RST" 

}

function normi()
{
	norminette | grep -vi OK 

	echo "" 
	nbr_error=$(norminette | grep Error! | wc -l)
	nbr_ok=$(norminette | grep OK! | wc -l)
	nbr_total=0
	let "nbr_total=$nbr_error+$nbr_ok"
	res=$(echo "scale=2; $nbr_ok / $nbr_total *100" | bc )
	
	echo -ne "$BOLD_RED""Error: $nbr_error \t"$RST
	echo -ne "$BOLD_GREEN""OK: $nbr_ok  \t"$RST
	echo -ne "number of files: $BOLD_WHITE$nbr_total    \t\t"$RST
	echo -ne "perc: $BOLD_WHITE$res"
	echo " %"
}

# shortcut
function poush_out()
{
	if [[ $# == 1 ]]
	then
		git add .
		git commit -m $@
		git push
	else
		echo -e W_ARGS
	fi
}

function poush()
{
	if [[ $# == 0 ]]
	then
		echo "missing arg(s)"
	else
		message="$@"
		date
		cd ~/42
		# cp ~/.config/Code/User/snippets/c.json .
		# cp ~/.config/Code/User/snippets/shellscript.json . 
		# cp -f ~/.shortcut .
		git status
		echo -e $BOLD_BLACK$BACK_GREEN" Poush $RESET$BOLD_WHITE $1"$RESET
		sleep 2
		git add .
		git commit -m $message
		git push
		echo -e $BOLD_BLACK$BACK_GREEN" End poush $RESET$BOLD_WHITE $1"$RESET
		git status
	fi
}

function pull()
{
	date
	cd ~/42
	git pull 
	# cp -f ~/42/c.json ~/.config/Code/User/snippets/ 
	# cp -f ~/42/shellscript.json ~/.config/Code/User/snippets/ 
	# cp -f ~/42/.shortcut ~/
}

function cpl()
{
	rm -f *.gch
	rm -f */*.gch
	$CC $@ && $input_file
}

function cpla()
{
	echo -e $BACK_CYAN" ----- START ----- "$RST" $BACK_YELLOW $(date +"%H:%M:%S") $RST\n"
	if [[ $# == 0 ]]
	then
		rm -f *.gch
		rm -f */*.gch
		$CC -g *.c *.h && $input_file
		rm -f *.gch
		rm -f */*.gch
	else
		rm -f *.gch
		rm -f */*.gch
		$CC -g *.c *.h && $input_file $@
		rm -f *.gch
		rm -f */*.gch
	fi

}

function cpl_all()
{
	echo -e $BACK_CYAN" ----- START ----- "$RST" $BACK_YELLOW $(date +"%H:%M:%S") $RST\n"
	if [[ $# == 0 ]]
	then
		rm -f *.gch
		rm -f */*.gch
		$CC -g *.c *.h */*.c */*.h && $input_file
		rm -f *.gch
		rm -f */*.gch
	else
		rm -f *.gch
		rm -f */*.gch
		$CC -g *.c *.h */*.c */*.h && $input_file $@
		rm -f *.gch
		rm -f */*.gch
	fi

}


function cplc()
{
	clear
	echo -e $BACK_CYAN" ----- START ----- "$RST" $BACK_YELLOW $(date +"%H:%M:%S") $RST\n"
	if [[ $# == 0 ]]
	then
		rm -f *.gch
		rm -f */*.gch
		$CC -g *.c *.h && $input_file
		rm -f *.gch
		rm -f */*.gch
	else
		rm -f *.gch
		rm -f */*.gch
		$CC -g *.c *.h && $input_file $@
		rm -f *.gch
		rm -f */*.gch
	fi

}

function cplc_all()
{
	clear
	echo -e $BACK_CYAN" ----- START ----- "$RST" $BACK_YELLOW $(date +"%H:%M:%S") $RST\n"
	if [[ $# == 0 ]]
	then
		rm -f *.gch
		rm -f */*.gch
		$CC -g *.c *.h */*.c */*.h && $input_file
		rm -f *.gch
		rm -f */*.gch
	else
		rm -f *.gch
		rm -f */*.gch
		$CC -g *.c *.h */*.c */*.h && $input_file $@
		rm -f *.gch
		rm -f */*.gch
	fi
}

# with args
function refresh()
{
	if [[ "$#" > 0 ]]; then
		while true; do
			tput clear
			tput cup 0 0
			echo -e $BACK_CYAN" ----- START ----- "$RST" $BACK_YELLOW $(date +"%H:%M:%S") $RST\n"
			rm -f *.gch
			gcc -Wall -Wextra -Werror $@ && $input_file
			echo -e "\n"
			sleep $SLEEP
		done
	else
		echo "$RED""no args $RST"
	fi
}

# all
function refresha()
{
	if [[ $# == 0 ]];
	then
		while true; do
			tput clear
			tput cup 0 0
			echo -e $BACK_CYAN" ----- START ----- "$RST" $BACK_YELLOW $(date +"%H:%M:%S") $RST\n"
			rm -f *.gch
			gcc -Wall -Wextra -Werror *.c *.h && $input_file
			echo -e "\n"
			sleep $SLEEP
		done
	else
		while true; do
			tput clear
			tput cup 0 0
			echo -e $BACK_CYAN" ----- START ----- "$RST" $BACK_YELLOW $(date +"%H:%M:%S") $RST\n"
			rm -f *.gch
			gcc -Wall -Wextra -Werror *.c *.h && $input_file $@
			echo -e "\n"
			sleep $SLEEP
		done
	fi
}

# all sub
function refresh_all()
{
	gcc -Wall -Wextra -Werror *.c */*.c
	while true; do
		tput clear
		tput cup 0 0
		echo -e $BACK_CYAN" ----- START ----- "$RST" $BACK_YELLOW $(date +"%H:%M:%S") $RST\n"
		rm -f *.gch && rm -f */*.gch
		if [[ -f "$(pwd)/$input_file" ]]; then
			if [[ $# > 0 ]]
			then
				$CC -g *.c *.h */*.c */*.h && $input_file $@
			else
				$CC -g *.c *.h */*.c */*.h && $input_file $@
			fi
		else
			gcc -Wall -Wextra -Werror *.c */*.c
		fi
		SECONDS=$SLEEP
		while [[ $SECONDS -ge 0 ]]; do
			tput cup 0 31; echo -e "$BACK_WHITE $SECONDS sec $RST"
			tput cup 0 31
			sleep 0.5
			let "SECONDS-=1"
		done
		rm -f *.gch && rm -f */*.gch
		echo -e "\n"
		sleep $SLEEP
	done
}

# norm refresh
function refreshn()
{
	SECONDS=$SLEEP
	not_finish=true
	while $not_finish; do
		nbr_lines=$(tput lines)
		nbr_lines=$(($nbr_lines-8))
		nbr_norm=$(normi | wc -l)
		
		tput clear
		tput cup 0 0
		
		echo -e "\t""$BACK_GREEN ----- ----- NORMINETTE ----- ----- $RST"
		
		norminette | grep -vi OK | head -14

		echo "" 
		nbr_error=$(norminette | grep -i Error! | wc -l)
		nbr_ok=$(norminette | grep -i OK! | wc -l)
		nbr_total=0
		let "nbr_total=$nbr_error+$nbr_ok"
		res=$(echo "scale=2; $nbr_ok / $nbr_total *100" | bc )
		if [[ $res == "100.00" ]]
		then
			echo -ne "\t\t    "
			not_finish=false
			print_title "100%" 2
		else
			echo -ne "$BOLD_RED""Error in $nbr_error files \t"$RST
			echo -ne "$BOLD_GREEN""OK in $nbr_ok files \t\t"$RST
			echo -ne "number of files: $BOLD_WHITE$nbr_total    \t"$RST
			echo -ne "perc: $BOLD_WHITE$res"
			echo " %"
		fi
		SECONDS=$SLEEP
		while [[ $SECONDS -ge 0 ]]; do
			tput cup 0 46; echo -e "$BACK_WHITE $SECONDS sec $RST"
			tput cup 0 45
			sleep 0.5
			let "SECONDS-=1"
		done
	done
	clear
}
function refreshn_test()
{
	SECONDS=$SLEEP
	while true; do
		nbr_lines=$(tput lines)
		nbr_lines=$(($nbr_lines-8))
		nbr_norm=$(normi | wc -l)
		
		tput clear
		tput cup 0 0
		
		echo -e "\t""$BACK_GREEN ----- ----- NORMINETTE ----- ----- $RST"
		
		norminette | grep -vi OK | grep -vi comment | head -14

		echo "" 
		nbr_error=$(norminette | grep -i Error! | grep -vi comment | wc -l)
		nbr_ok=$(norminette | grep -i OK! | wc -l)
		nbr_total=0
		let "nbr_total=$nbr_error+$nbr_ok"
		res=$(echo "scale=2; $nbr_ok / $nbr_total *100" | bc )
		
		echo -ne "$BOLD_RED""Error in $nbr_error files \t"$RST
		echo -ne "$BOLD_GREEN""OK in $nbr_ok files \t\t"$RST
		echo -ne "number of files: $BOLD_WHITE$nbr_total    \t"$RST
		echo -ne "perc: $BOLD_WHITE$res"
		echo " %"
		SECONDS=$SLEEP
		while [[ $SECONDS -ge 0 ]]; do
			tput cup 0 46; echo -e "$BACK_WHITE $SECONDS sec $RST"
			tput cup 0 45
			sleep 0.5
			let "SECONDS-=1"
		done
	done
}

function clr()
{
	if [[ "${1/-f}" != $1 ]]; then
		rm -f *.gch
		rm -f a.out
		rm -rf */.vscode
		rm -rf .vscode
		clear
	else
		echo "are you sure to clear :\n_ file.gch\n_ a.out\n_ .vscode\n?\n"
		read -r answer
		if [[ $answer == "yes" || $answer == "y" ]]; then
			rm -f *.gch
			rm -f a.out
			rm -rf .vscode
			clear
		else
			echo -e $NOTHING
		fi
	fi
}

function crt()
{
	if [[ $# == 1 ]]
	then
		if [[ ! -d "$1" ]]; then
			mkdir $1 && cd $1 && code . 
		else
			echo "$1 already exist"
		fi
	else
		echo -e $W_ARGS
	fi
}
function crtf()
{
	if [[ $# == 1 ]]
	then
		if [[ ! -f "$1" ]]; then
			touch $1 && code $1 
		else
			echo "$1 already exist"
		fi
	else
		echo -e $W_ARGS
	fi
}

function is_in()
{
	if [[ $# == 2 ]]
	then
		big=$1
		needle=$2
		if [[ "${big/$needle}" == $big ]]
		then
			echo "nothing"
		else
			echo "something here"
		fi
	else
		echo -e $W_ARGS
	fi
}

function is_number()
{
	if ! [[ $1 =~ '^[0-9]+$' ]]; 
	then 
		echo "error: Not a number" 
		# >&2; exit 1 
	fi
}

function print_arr()
{
	arr=$1
	for item in "${arr[@]}"
	do
		echo $item
	done
}

function nds()
{
	if [[ $# == 1 || $# == 2 ]]; then
		big=$1
		needle=".js"
		if [[ "${big/$needle}" == $big ]]
		then
			ext=".js"
			file=$1$ext
		else
			file=$1
		fi

		if [[ -f $file ]]; then
			echo -e "$BOLD_YELLOW$file$RST exist and it is launched with $BOLD_GREEN""node$RST"
			if [[ $2 == "-c" ]]; then
				echo -e "and $BOLD_CYAN""vscode$RST"
				code $file
			fi
			node $file
		else
			echo -e "$BOLD_YELLOW$file$RST does not exist, do you want to create it ? $BOLD_YELLOW(y/n)$RST"
			echo -e "$RED(!) Check the path before to answer the question (!)$RST"
			echo -e "$RED--->$RST $(pwd)$RST"
			read answer
			if [[ $answer == "y" || $answer == "yes" ]]; then
				touch $file
				echo -e "$BOLD_YELLOW$file$RST	 created"
				if [[ $2 == "-c" ]]; then
					echo -e "$BOLD_YELLOW$file$RST is launch with $BOLD_BLUE""node$RST"
					code $file
				fi
			else
				echo -e "$BOLD_YELLOW""nothing happened 👒$RST"
			fi
		fi
	else
		echo -e $W_ARGS
	fi
}

function rmv()
{
	if [[ $# == 1 ]]
	then
		if [[  -f $1 ]]
		then
			rm -f $1
		elif [[ -d $1 ]]
		then
			rm -rf $1
		else 
			echo "$1 is not a file or a directory, are you sure to delete it ?"
			read answer
			if [[ answer == 'y' || answer == 'yes' ]]
			then
				rm -rf $1
			else
				echo -e $NOTHING
			fi
		fi
	elif [[ $# == 2 ]]
	then
		if [[ $1 == "-f" || $2 == "-f" ]]
		then
			echo "x"
		fi
	else
		echo -e $W_ARGS
	fi
}

function high_mem()
{
	line="$(top -bn1 -o +%MEM | head -n 8 | tail -1)"
	pid="$(top -bn1 -o +%MEM | head -n 8 | tail -1 | awk '{print $1}')"
	task_name="$(top -bn1 -o +%MEM | head -n 8 | tail -1 | awk '{print $12}')"
	echo -e $line
	if [[ $task_name != "plasmashell" && $task_name != "kwin_x11" ]]
	then
		echo -e "$BOLD_RED "$task_name" was killed $RST"
		kill -9 $pid
	else
		echo -e "$BOLD_YELLOW""nothing happened 👒$RST"
	fi
}

function vmem()
{
	if [ -z "$1" ]
	then
		# echo "5 most task memory used"
		top -bn1 -o %MEM | head -n 12 | tail -7
	else
		# echo "with arg"
		tl=$1
		hd=5
		let "tl+=2"
		let "hd+=tl"
		top -bn1 -o %MEM | head -n $hd | tail -$tl
		# echo "hd "$hd
		# echo "start "$start
	fi
}
function vcpu()
{
	if [ -z "$1" ]
	then
		# echo "5 most task memory used"
		top -bn1 -o %CPU | head -n 12 | tail -7
	else
		# echo "with arg"
		tl=$1
		hd=5
		let "tl+=2"
		let "hd+=tl"
		top -bn1 -o %CPU | head -n $hd | tail -$tl
		# echo "hd "$hd
		# echo "start "$start
	fi
}
function vstat()
{
	if [ -z "$1" ]
	then
		# "5 most task memory used"
		echo -e "$BLUE\e[4m CPU $BLUE"
		top -bn1 -o %CPU | head -n 12 | tail -7
		echo -e "$GREEN\e[4m MEM $GREEN"
		top -bn1 -o %MEM | head -n 12 | tail -7
	else
		# "with arg"
		tl=$1
		hd=5
		let "tl+=2"
		let "hd+=tl"
		echo -e "$BLUE\e[4m CPU $BLUE"
		top -bn1 -o %CPU | head -n $hd | tail -$tl
		echo -e "$GREEN\e[4m MEM $GREEN"
		top -bn1 -o %MEM | head -n $hd | tail -$tl
	fi
}

function search()
{
	if [ -z "$  1" ]
	then
		echo "first arg missing"
	else
		grep -riIn -B 4 $1
		if [[ $(grep -riIon $1 | wc -l) == 1 ]]
		then
			a="$(grep -riIon $1 | sed -r "s/\x1B\[([0-9]{1,3}(;[0-9]{1,2})?)?[mGK]//g" | awk -F ":" '{print $1":"$2}')"
			code -g $a
		else
			echo -e $BACK_RED" $(grep -riIon $1 | wc -l) results, expected : 1 "$RST
			echo -e "\nsearch again for 1 result"
			echo -n "$> "
			read answer 
			echo ""
			search $answer
			# b="$(tr -d \\033 $a :$1)"
			# echo -e $b
		fi
	fi
}

function split()
{
	if [[ $# == 0 ]]
	then
		echo "Missing args, the first must be the string and the second will be the delimiter"
	elif [[ $# == 1 ]]
	then
		text=$1
		IFS=' '
		read -a strarr <<< "$text"
		echo -e "length: ${#strarr[*]} \n"
		for val in "${strarr[@]}";
		do
			printf "$val\n"
		done
	elif [[ $# == 2 ]]
	then
		text=$1
		IFS=$2
		read -a strarr <<< "$text"
		echo -e "length: ${#strarr[*]} \n"
		for val in "${strarr[@]}";
		do
			printf "$val\n"
		done
	fi
}

function act()
{
	cd 
	cd 42/cursus/
	complete -d /mnt/nfs/homes/ggosse/42/cursus/
	complete -d /mnt/nfs/homes/ggosse/42/cursus/ && cd ~/42/cursus/$1
}

function work()
{
	if [ -z $1 ]
	then
		echo "first arg missing"
	else
		cd
		cd 42
		git pull 
		cd ~/42/cursus/$1 && code . && google-chrome
	fi
}

