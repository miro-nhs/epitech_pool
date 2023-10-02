/*
** EPITECH PROJECT, 2021
** test_my_str_isprintable
** File description:
** is printable
*/

#include  <criterion/criterion.h>

Test (my_str_isprintable, aplpha_only)
{
    char str[] = "hooooojotarodio";

    my_str_isprintable(str);
    cr_assert(my_str_isprintable(str) == 1);
}

Test (my_str_isprintable, aplpha_and_unprintable_cara)
{
    char str[2];
    str[0] = 15;
    str[1] = 21;
    str[2] = 10;


    my_str_isprintable(str);
    cr_assert(my_str_isprintable(str) == 0);
}