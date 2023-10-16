/*
** EPITECH PROJECT, 2023
** Day04
** File description:
** concat
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "concat.h"

void concat_strings(const char *str1, const char *str2, char **res)
{
    int len = strlen(str1) + strlen(str2);
    *res = malloc(sizeof(char) * len + 2);
    *res[0] = '\0';
    if (*res == NULL)
        return;
    strcat((*res), str1);
    strcat((*res), str2);
    return;
}

void concat_struct(concat_t *str)
{
    concat_strings(str->str1, str->str2, &str->res);
    return;
}
