/*
** EPITECH PROJECT, 2023
** PDG
** File description:
** ex01
*/

#include "string.h"

void clear(string_t *this)
{
    free(this->str);
    this->str = strdup("");
}
int length(const string_t *this)
{
    if (this->str == NULL)
        return -1;
    return strlen(this->str);
}

int compare_s(const string_t *this, const string_t *str)
{
    return compare_c(this, str->str);
}

int compare_c(const string_t *this, const char *str)
{
    return strcmp(this->str, str);
}

size_t copy(const string_t *this, char *s, size_t n, size_t pos)
{
    int i = 0;

    for (; i < n && s[i]; i++) {
        if (!this->str[pos])
            s[i++] = '\0';
        else
            s[i] = this->str[pos];
        pos++;
    }
    return i;
}
