/*
** EPITECH PROJECT, 2023
** PDG
** File description:
** struct
*/

#include "string.h"

void string_init(string_t *this, const char *s)
{
    this->str = strdup(s);
    this->assign_c = &assign_c;
    this->assign_s = &assign_s;
    this->append_s = &append_s;
    this->append_c = &append_c;
    this->at = &at_at;
    this->compare_c = &compare_c;
    this->compare_s = &compare_s;
    this->clear = &clear;
    this->length = &length;
    this->copy = &copy;
}

void string_destroy(string_t *this)
{
    free(this->str);
    this->str = NULL;
}
