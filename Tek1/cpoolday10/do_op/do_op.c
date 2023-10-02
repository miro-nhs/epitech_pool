/*
** EPITECH PROJECT, 2021
** do_op
** File description:
** 2 value calculator
*/

#include "../include/do_op.h"
#include "../include/my.h"

int what_operation(char op)
{
    char flag[6] = {'+', '-', '/', '*', '%', '\0'};

    for (int i = 0; flag[i] != '\0'; i++) {
        if (op == flag[i])
            return (0);
    }
    return (84);
}

char operation(char *operator)
{
    for (int i = 0; operator[i] != '\0'; i++) {
        if (what_operation(operator[i]) == 0)
            return (operator[i]);
    }
    return (0);
}

int calcul(char *value1, char *value2, char op)
{
    if (op == '+' || op == '-') {
        if (op == '+')
            return (add(value1, value2));
        else
            return (sub(value1, value2));
    }
    else if (op == '*' || op == '/') {
        if (op == '*')
            return (mul(value1, value2));
        else
            return (divide(value1, value2));
    }
    else
        return (modulo(value1, value2));
}

int do_op(char *value1, char *operator, char *value2)
{
    char op = operation(operator);
    if (op == '-' || op == '+' || op == '/' || op == '%' || op == '*')
        return (calcul(value1, value2, op));
    return (1);
}

int main(int ac, char **av)
{
    if (ac != 4)
        return (84);
    return (do_op(av[1], av[2], av[3]));
}