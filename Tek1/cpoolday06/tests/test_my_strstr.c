/*
** EPITECH PROJECT, 2021
** test_my_strstr
** File description:
** str str
*/

#include  <criterion/criterion.h>

Test (my_strstr, return_to_find)
{
    char str[12] = "Hooojotaroo";
    char const to_find[11] = "Hooojotaro";

    my_strstr(str, to_find);
    cr_assert_str_eq(str, to_find);
}