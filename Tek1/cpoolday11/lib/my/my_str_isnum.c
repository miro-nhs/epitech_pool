/*
** EPITECH PROJECT, 2021
** my_str_isnum
** File description:
** is digit
*/

#include "my.h"

int  my_str_isnum(char const *str)
{
    int test = 0;

    for (int a = 0; str[a] != '\0'; a++)
    {
    if (str[a] < '0' || str[a] > '9')
            test++;
    }
    if (test == 0)
        return (1);
    else
        return (0);
}
