#!/bin/sh

cut -d: -f 1 |sed -n "n;p" | rev | sort -r  | head -n $MY_LINE2| tail -n $(($MY_LINE2 - $MY_LINE1 + 1)) | sed -z 's/\n/, /gi' | sed 's/.$//' | sed 's/.$//'  printf ".\n"
