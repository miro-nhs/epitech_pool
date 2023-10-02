#!/bin/sh
gcc -c -Wall *.c
ar rc libmy.a *.o
rm -f *.o