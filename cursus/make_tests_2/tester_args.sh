#! /bin/sh



BACK_GREEN="\033[32m"
BACK_RED="\033[32m"

good="\033[32mOK\033[0m"
bad="\033[31mError \033[0m"

big_good="\033[32m  OK   \033[0m"
big_bad="\033[31m Error \033[0m"



source make_tests/args/minus_sign.sh 
sleep 1
source make_tests/args/plus_sign.sh 
sleep 1
source make_tests/args/letter.sh 
sleep 1
source make_tests/args/nbr_args.sh 

sleep 2
