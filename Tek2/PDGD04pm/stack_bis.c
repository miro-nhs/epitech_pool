/*
** EPITECH PROJECT, 2023
** PDG
** File description:
** stack_bis
*/


#include "list.h"
#include "stack.h"
#include <stdlib.h>
#include <stdio.h>

unsigned int stack_get_size(stack_t stack)
{
    return (list_get_size(stack));
}
