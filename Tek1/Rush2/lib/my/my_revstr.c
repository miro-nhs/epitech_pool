/*
** EPITECH PROJECT, 2021
** my_revstr
** File description:
** reverse a str
*/

#include "../../include/my.h"

char *my_revstr(char *str)
{
    int i = my_strlen(str);
    char n;

    for (int d = 0; d != my_strlen(str) / 2; d++) {
        n = str[d];
        str[d] = str[i - 1];
        str[i - 1] = n;
        i--;
    }
    return (str);
}