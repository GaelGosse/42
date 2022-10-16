#! /bin/sh

#
echo -e "\n    "$BACK_WHITE" n* 1 "$RST
echo -e "8 92 64\tExpect: $bad\tReel:$(./a.out 8 92 64 | grep Error || echo -e $good)"
if ./a.out 8 92 64 | grep -q Error ; then
	echo -e $BACK_GREEN" OK "$RST
else
	echo -e $BACK_RED" Error "$RST
fi

echo -e "\n    "$BACK_WHITE" n* 1 "$RST
echo -e "- 92 64\tExpect: $bad\tReel:$(./a.out - 92 64 | grep Error || echo -e $good)"
if ./a.out - 92 64 | grep -q Error ; then
	echo -e $BACK_GREEN" OK "$RST
else
	echo -e $BACK_RED" Error "$RST
fi

echo -e "\n    "$BACK_WHITE" n* 1 "$RST
echo -e "-8 92 64\tExpect: $bad\tReel:$(./a.out -8 92 64 | grep Error || echo -e $good)"
if ./a.out -8 92 64 | grep -q Error ; then
	echo -e $BACK_GREEN" OK "$RST
else
	echo -e $BACK_RED" Error "$RST
fi

echo -e "\n    "$BACK_WHITE" n* 1 "$RST
echo -e "8- 92 64\tExpect: $bad\tReel:$(./a.out 8- 92 64 | grep Error || echo -e $good)"
if ./a.out "8- 92 64" | grep -q Error ; then
	echo -e $BACK_GREEN" OK "$RST
else
	echo -e $BACK_RED" Error "$RST
fi