/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** c pool day 4
*/

#include "../../include/my.h"

int my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
}

int my_put_error_str(char const *str)
{
    write(2, str, my_strlen(str));
}