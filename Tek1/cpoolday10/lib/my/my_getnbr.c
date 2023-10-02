/*
** EPITECH PROJECT, 2021
** my_getnbr
** File description:
** c pool day 4
*/

#include "my.h"

static int cheks(char *str)
{
    int t = 0;
    int result = 0;

    while (str[t] == '+' || str[t] == '-')
        ++t;
    while (str[t] >= '0' && str[t] <= '9' && str[t] != '\0') {
        result++;
        t++;
    }
    if (result > 10)
        return (0);
    else
        return (1);
}

int my_getnbr(char *str)
{
    long result = 0;
    int sign = 1;
    int t = 0;

    if (cheks(str) == 0)
        return (0);
    while (str[t] == '+' || str[t] == '-') {
        if (str[t] == '-')
            sign = sign * -1;
        ++t;
    }
    while (str[t] >= '0' && str[t] <= '9' && str[t] != '\0') {
        result = result * 10;
        result = result + str[t] - 48;
        t++;
    }
    result *= sign;
    if (result > 2147483647 || result < -2147483648)
        return (0);
    return ((int)result);
}
