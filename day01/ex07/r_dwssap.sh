#!/bin/sh

cat /etc/passwd | grep -v ^# | cut -d: -f1 | sed '1d' | awk 'FNR%2' | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/./' | tr -d '\n'
