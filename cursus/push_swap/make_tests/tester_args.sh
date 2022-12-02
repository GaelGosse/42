#! /bin/bash



good=$BOLD_GREEN"OK"$RST
big_good=$BACK_GREEN"  OK   "$RST
bad=$BOLD_RED"Error "$RST
big_bad=$BACK_RED" Error "$RST



source make_tests/args/minus_sign.sh 

source make_tests/args/plus_sign.sh 

source make_tests/args/letter.sh 

source make_tests/args/nbr_args.sh 

sleep 2
