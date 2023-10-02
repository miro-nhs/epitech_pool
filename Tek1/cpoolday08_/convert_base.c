/*
** EPITECH PROJECT, 2021
** convert_base
** File description:
** convert nbr from base to base
*/

#include <stdlib.h>

char *convert_to_base(int nb, char *base, int sign)
{
    int r = 0;
    char convert_nb[100] = {0};
    int i = 0;
    int my_base = my_strlen(base);

    for (; nb > 0 && i < 99; i++) {
        r = nb % my_base;
        nb = nb / my_base;
        convert_nb[i] = base[r];
    }
    return (my_revstr(convert_nb));
}

int check(char c)
{
    if (c >= '0' && c <= '9')
        return ((int)c - '0');
    else
        return ((int)c - 'A' + 10);
}

int getnbr_to_dec(char *str, char *base)
{
    int len = my_strlen(str);
    int power = 1;
    int result = 0;
    int i = len - 1;
    int my_base = my_strlen(base);
    int sign = 1;

    if (str[0] == '-')
        sign = -1;
    for (; i >= 0; i--) {
        if (check(str[i]) >= my_base)
            return (-1);
        result += check(str[i]) * power;
        power = power * my_base;
    }
    return (result * sign);
}

char *convert_base(char const *nbr, char const *base_from, char const *base_to)
{
    int nb = getnbr_to_dec(my_getnbr(nbr), base_from);
    int sign = 1;
    char *result = NULL;

    if (nb < 0) {
        sign *= -1;
        nb = nb * -1;
        result = malloc(sizeof(char) * 12);
        result[0] = '-';
        result = convert_to_base(nb, base_to, sign);
    }
    else {
        result = malloc(sizeof(char) * 11);
        result = convert_to_base(nb, base_to, sign);
    }
    return (result);
}