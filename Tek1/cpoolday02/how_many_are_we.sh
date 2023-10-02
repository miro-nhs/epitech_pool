#!/bin/sh
cut -d ";" -f 3 | grep -i "$1" | wc -l
