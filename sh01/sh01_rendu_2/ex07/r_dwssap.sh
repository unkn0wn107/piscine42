#!/bin/sh

cat /etc/passwd | grep -v '#' | awk -F : '{if (NR%2 == 0) print $1}' | rev | sort -r | awk -F : -v l1=$FT_LINE1 -v l2=$FT_LINE2 'NR>=l1 && NR<=l2' ORS=", " | rev | sed 's/ ,/./' | rev | tr -d '\n'
