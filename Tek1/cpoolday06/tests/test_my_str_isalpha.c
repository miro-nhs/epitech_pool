/*
** EPITECH PROJECT, 2021
** test_my_str_isalpha
** File description:
** is alpha
*/

#include  <criterion/criterion.h>

Test (my_str_isalpha, aplpha_only)
{
    char str[] = "HooooJotaro";

    my_str_isalpha(str);
    cr_assert(my_str_isalpha(str) == 1);
}

Test (my_str_isalpha, aplpha_and_num)
{
    char str[] = "Nigerundayo Smoker";

    my_str_isalpha(str);
    cr_assert(my_str_isalpha(str) == 0);
}