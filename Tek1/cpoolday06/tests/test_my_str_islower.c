/*
** EPITECH PROJECT, 2021
** test_my_str_islower
** File description:
** is lower
*/

#include  <criterion/criterion.h>

Test (my_str_islower, aplpha_only)
{
    char str[] = "omaewamoshinderiu";

    my_str_islower(str);
    cr_assert(my_str_islower(str) == 1);
}

Test (my_str_islower, aplpha_and_num)
{
    char str[] = "omaewa67moshinderiu";

    my_str_islower(str);
    cr_assert(my_str_islower(str) == 0);
}