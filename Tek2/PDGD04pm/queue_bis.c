/*
** EPITECH PROJECT, 2023
** PDG
** File description:
** queue_bis
*/

#include "list.h"
#include "queue.h"
#include <stdlib.h>
#include <stdio.h>

unsigned int queue_get_size(queue_t queue)
{
    return (list_get_size(queue));
}
