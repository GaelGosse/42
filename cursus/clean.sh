#! /bin/bash

echo -e $CYAN"printf"$RST

grep -ri "printf" | grep --color=always -i ".sh"

echo -e $CYAN"(void)"$RST

grep -ri "(void)" | grep --color=always -i ".sh"


