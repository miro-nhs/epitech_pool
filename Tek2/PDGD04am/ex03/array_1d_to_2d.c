/*
** EPITECH PROJECT, 2023
** Day04
** File description:
** array_1d_to_2d
*/

#include <stddef.h>
#include <stdlib.h>

void array_1d_to_2d(const int *array, size_t height, size_t width, int ***res)
{
    int idx = 0;
    int **tmp = malloc(sizeof(int *) * height);
    if (tmp == NULL)
        return;
    for (int i = 0; i < height; i++) {
        tmp[i] = malloc(sizeof(int) * width);
        for (int j = 0; j < width; j++) {
            tmp[i][j] = array[idx++];
        }
    }
    *res = tmp;
    return;
}

void array_2d_free(int **array, size_t height, size_t width)
{
    for (int i = 0; i < height; i++) {
        free(array[i]);
    }
    free(array);
}
