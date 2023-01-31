
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

export NOTHING="$BOLD_YELLOW""nothing happened 👒$RST"

export RESET="\033[0m"
export RST="\033[0m"

# BASH CONFIG
source ~/.bash_profile

PRPT()
{
	EXIT_CDE=$?
	ACTPATH="$(pwd)/*"
	file_nbr=0
	dir_nbr=0
	hours=$(date +%H)
	minutes=$(date +%M)
	hst=$(hostname | cut -d. -f1)
	# if [[ $hours -eq 19 && $minutes -gt 0 ]]
	# then
	# 	if [[ $hours -eq 19 && $minutes -ge 20 ]]
	# 	then
	# 		echo -e "$BOLD_RED END $RST"
	# 		# read answer
	# 		# end_work $answer
	# 	else
	# 		if [[ $EXIT_CDE != 0 ]]
	# 		then
	# 			echo -e "$BOLD_WHITE┌─────── $RST$BOLD_RED$(date +"%T")$RST $WHITE$(pwd)$RST"
	# 			echo -e      "$WHITE│$RST $BOLD_BACK_WHITE[$(whoami)$BACK_WHITE @ $BOLD_BACK_WHITE$hst]$RST $BOLD_WHITE $(basename $PWD)\t$RST $RED (!) Warning for 19:20 (!) $RST"
	# 			echo -e "$BOLD_WHITE└─ $BOLD_RED♠ $RST"
	# 		else
	# 			echo -e "$BOLD_WHITE┌─────── $RST$BOLD_WHITE$(date +"%T")$RST $WHITE$(pwd)$RST"
	# 			echo -e      "$WHITE│$RST $BOLD_BACK_WHITE[$(whoami)$BACK_WHITE @ $BOLD_BACK_WHITE$hst]$RST $BOLD_WHITE $(basename $PWD)\t$RST $RED (!) Warning for 19:20 (!) $RST"
	# 			echo -e "$BOLD_WHITE└─ ♠ $RST"
	# 		fi
	# 	fi
	# else
		for file in $ACTPATH
		do
			dir="$(dirname "${file}")"
			filename="$(basename ${file})"
			if [[ -f $file ]]
			then
				let "file_nbr+=1"
			elif [[ -d $file ]]
			then
				let "dir_nbr+=1"
			fi
		done
		if [[ $EXIT_CDE != 0 ]]
		then
			echo -e "$BOLD_CYAN┌───────$RST $BOLD_RED$(date +"%T")$RST $CYAN$(pwd)$RST"
			echo -e      "$CYAN│$RST $BOLD_BACK_CYAN[$(whoami)$BACK_CYAN @ $BOLD_BACK_CYAN$hst]$RST  $BOLD_WHITE$(basename $PWD)\t$RST files: $BOLD_RED$file_nbr$RST\tdir: $BOLD_RED$dir_nbr$RST"
			echo -e "$BOLD_CYAN└─$RST $BOLD_RED♠$RST "
		else
			echo -e "$BOLD_CYAN┌───────$RST $BOLD_YELLOW$(date +"%T")$RST $CYAN$(pwd)$RST"
			echo -e      "$CYAN│$RST $BOLD_BACK_CYAN[$(whoami)$BACK_CYAN @ $BOLD_BACK_CYAN$hst]$RST  $BOLD_WHITE$(basename $PWD)\t$RST files: $BOLD_YELLOW$file_nbr$RST\tdir: $BOLD_YELLOW$dir_nbr$RST"
			echo -e "$BOLD_CYAN└─$RST $BOLD_CYAN♠$RST "
		fi
	# fi	
}

PS1='$(PRPT)'
# PS1="$BOLD_CYAN┌─────── $RST$BOLD_YELLOW\t$RST $CYAN$PWD$RST \n$CYAN│$RST $BOLD_BACK_CYAN[\u$BACK_CYAN @ $BOLD_BACK_CYAN\h]$RST $BOLD_WHITE \W$RST\n$BOLD_CYAN└─ ♠$RST "

alias cfgb='code ~/.bashrc'

source ~/.shortcut

