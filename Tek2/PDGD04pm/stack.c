/*
** EPITECH PROJECT, 2023
** PDG
** File description:
** stack
*/

#include "list.h"
#include "stack.h"
#include <stdlib.h>
#include <stdio.h>

bool stack_is_empty(stack_t stack)
{
    return (list_is_empty(stack));
}

bool stack_push(stack_t *stack_ptr, void *elem)
{
    return (list_add_elem_at_front(stack_ptr, elem));
}

bool stack_pop(stack_t *stack_ptr)
{
    return (list_del_elem_at_front(stack_ptr));
}

void stack_clear(stack_t *stack_ptr)
{
    return (list_clear(stack_ptr));
}

void *stack_top(stack_t stack)
{
    return (list_get_elem_at_front(stack));
}
