/*
** EPITECH PROJECT, 2021
** test_my_strncpy
** File description:
** criterion shlag
*/

#include  <criterion/criterion.h>

Test(my_strncpy, copy_five_characters_in_empty_array)
{
    char dest [7] = {0};

    my_strncpy(dest , "Yamete sempai", 6);
    cr_assert_str_eq(dest, "Yamete");
}