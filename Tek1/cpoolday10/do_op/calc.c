/*
** EPITECH PROJECT, 2021
** do_op
** File description:
** add_inf
*/

#include "../include/my.h"
#include "../include/do_op.h"

int add(char *value1, char *value2)
{
    int nb1 = my_getnbr(value1);
    int nb2 = my_getnbr(value2);

    nb1 = nb1 + nb2;
    my_put_nbr(nb1);
    my_putchar('\n');
    return (0);
}

int sub(char *value1, char *value2)
{
    int nb1 = my_getnbr(value1);
    int nb2 = my_getnbr(value2);

    nb1 = nb1 - nb2;
    my_put_nbr(nb1);
    my_putchar('\n');
    return (0);
}

int modulo(char *value1, char *value2)
{
    int nb1 = my_getnbr(value1);
    int nb2 = my_getnbr(value2);

    if (nb2 == 0) {
        my_putstr("SROP: modulo by zero\n");
        return (84);
    }
    nb1 = nb1 % nb2;
    my_put_nbr(nb1);
    my_putchar('\n');
    return (0);
}

int divide(char *value1, char *value2)
{
    int nb1 = my_getnbr(value1);
    int nb2 = my_getnbr(value2);
    int res = 0;

    if (nb2 == 0) {
        my_putstr("STOP: divide by zero");
        return (84);
    }
    res = nb1 / nb2;
    my_put_nbr(res);
    my_putchar('\n');
    return (0);
}

int mul(char *value1, char *value2)
{
    int nb1 = my_getnbr(value1);
    int nb2 = my_getnbr(value2);

    nb1 = nb1 * nb2;
    my_put_nbr(nb1);
    my_putchar('\n');
    return (0);
}