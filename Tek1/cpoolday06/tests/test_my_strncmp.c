/*
** EPITECH PROJECT, 2021
** test_my_strncmp
** File description:
** n cmp
*/

#include  <criterion/criterion.h>

Test (my_strncmp, cmp_str_true)
{
    char s1[] = "Hoo";
    char const s2[] = "Hoo";

    cr_assert(my_strncmp(s1, s2, 3) == 0);
}

Test (my_strncmp, cmp_str_nega)
{
    char s1[] = "Jotaro";
    char const s2[] = "JotaroKujo";

    cr_assert(my_strncmp(s1, s2, 10) == -1);
}

Test (my_strncmp, cmp_str_posi)
{
    char s1[] = "DioBrando";
    char const s2[] = "Dio";

    cr_assert(my_strncmp(s1, s2, 10) == 1);
}