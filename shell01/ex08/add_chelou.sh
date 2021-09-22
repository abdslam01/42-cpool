#!/bin/sh

base1="'\\\"?!"
base2=mrdoc

number1=$(echo $FT_NBR1 | sed "y/$base1/01234/")
number2=$(echo $FT_NBR2 | sed "y/$base2/01234/")

echo "ibase=5;obase=D;$number1 + $number2" | bc | sed 'y/0123456789ABC/gtaio luSnemf/'
