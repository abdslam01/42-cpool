#!/bin/sh

cat /etc/passwd | grep '^[^#]' | awk "!(NR % 2)" | cut -d: -f1 | rev  | sort -r | awk -v FT_LINE1=$FT_LINE1 -v FT_LINE2=$FT_LINE2 'NR >= FT_LINE1 && NR <= FT_LINE2 { print $0 }' | tr -s '\n' ',' | sed 's/,/, /g'  | sed 's/, $/./'
