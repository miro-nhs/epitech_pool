/*
** EPITECH PROJECT, 2023
** PDG
** File description:
** ex00
*/

#include "string.h"

void assign_c(string_t *this, const char *str)
{
    free(this->str);
    this->str = strdup(str);
}

void assign_s(string_t *this, const string_t *str)
{
    free(this->str);
    this->str = strdup(str->str);
}

void append_s(string_t *this, const string_t *ap)
{
    int len = strlen(this->str) + strlen(ap->str);
    char *tmp = malloc(sizeof(char) * len + 1);

    tmp[0] = '\0';
    strcat(tmp, this->str);
    strcat(tmp, ap->str);
    this->assign_c(this, tmp);
    free(tmp);
}

void append_c(string_t *this, const char *ap)
{
    int len = strlen(this->str) + strlen(ap);
    char *tmp = malloc(sizeof(char) * len + 1);

    tmp[0] = '\0';
    strcat(tmp, this->str);
    strcat(tmp, ap);
    this->assign_c(this, tmp);
    free(tmp);
}

char at_at(const string_t *this, size_t pos)
{
    if (pos >= strlen(this->str) || pos < 0)
        return -1;
    else
        return this->str[pos];
}