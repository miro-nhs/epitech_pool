/*
** EPITECH PROJECT, 2021
** test_my_strcapitalize
** File description:
** cpitalize
*/

#include  <criterion/criterion.h>

Test (my_strcapitalize, print_maj)
{
    char str[] = "hooo 42jotaro fifty-two";

    my_strcapitalize(str);
    cr_assert_str_eq(str, "Hooo 42jotaro Fifty-Two");
}