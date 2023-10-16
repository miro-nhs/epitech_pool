/*
** EPITECH PROJECT, 2023
** Day04
** File description:
** mul_div
*/

#include <stdio.h>

void mul_div_long(int a, int b, int *mul, int * div)
{
    *mul = a * b;
    if (b == 0) {
        *div = 42;
        return;
    }
    *div = a / b;
}

void mul_div_short(int *a, int *b)
{
    int tmp = *a;

    *a = (*a) * (*b);
    if (*b == 0) {
        *b = 42;
        return;
    }
    *b = tmp / *b;
}
