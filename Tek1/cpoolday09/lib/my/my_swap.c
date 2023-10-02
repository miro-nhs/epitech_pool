/*
** EPITECH PROJECT, 2021
** my_swap
** File description:
** c pool day 4
*/

void my_swap(int *a, int *b)
{
    int i = *b;

    *b = *a;
    *a = i;
}