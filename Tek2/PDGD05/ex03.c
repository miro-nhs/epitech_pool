/*
** EPITECH PROJECT, 2023
** PDG
** File description:
** ex03
*/

#include "string.h"

const char *c_str(const string_t *this)
{
    return this->str;
}

int empty(const string_t *this);