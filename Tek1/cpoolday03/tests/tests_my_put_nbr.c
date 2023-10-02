/*
** EPITECH PROJECT, 2021
** task08
** File description:
** test my_put_nbr
*/

#include <unistd.h>

int main(void)
{
    for (int i = -2147483647; i < 2147483647; i++) {
        my_put_nbr(i);
        my_putchar('\n');
    }
    return (0);
}