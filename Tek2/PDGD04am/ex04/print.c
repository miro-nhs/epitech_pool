/*
** EPITECH PROJECT, 2023
** Day04
** File description:
** print
*/

#include <unistd.h>
#include <string.h>
#include "print.h"

void print_reverse(const char *str)
{
    for (int i = strlen(str); i > 0; i--)
        write(1, &str[i], 1);
}

void print_normal(const char *str)
{
    write(1, str, strlen(str));
    write(1, "\n", 1);
}

void print_upper(const char *str)
{
    for (int i = 0; str[i]; i++)
        write(1, &str[i] - 32, 1);
    write(1, "\n", 1);
}

void print_42(const char *str) {
    write(1, "42\n", 2);
    return;
}

void do_action(action_t action, const char *str)
{
    void(*ptr[])(const char *) = {
    print_normal, print_reverse, print_upper, print_42
    };
    ptr[action](str);
    return;
}
