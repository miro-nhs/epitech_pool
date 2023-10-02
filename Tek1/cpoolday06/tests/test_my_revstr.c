/*
** EPITECH PROJECT, 2021
** test_my_revstr
** File description:
** criterion shlag
*/

#include  <criterion/criterion.h>

Test (my_revstr, print_rev_str)
{
    char str[] = "Ohayo oni-chan";

    my_revstr(str);
    cr_assert_str_eq(str, "nahc-ino oyahO");
}