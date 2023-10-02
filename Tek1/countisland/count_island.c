/*
** EPITECH PROJECT, 2021
** count_island
** File description:
** count island
*/

#include "./include/my.h"

static void greed_island(char **world, int y, int x, t_position *pos)
{
    world[y][x] = pos->id + 48;
    if (x < pos->x_max - 1) {
        if (world[y][x + 1] == 'X')
            greed_island(world, y, x + 1, pos);
    }
    if (y < pos->y_max - 1) {
        if (world[y + 1][x] == 'X')
            greed_island(world, y + 1, x, pos);
    }
    if (x > 0) {
        if (world[y][x - 1] == 'X')
            greed_island(world, y, x - 1, pos);
    }
    if (y > 0) {
        if (world[y - 1][x] == 'X')
            greed_island(world, y - 1, x, pos);
    }
}

static void is_island(char **world, t_position *pos)
{
    if (world[pos->y][pos->x] == 'X') {
        greed_island(world, pos->y, pos->x, pos);
        pos->id++;
    }
}

int count_island(char **world)
{
    t_position pos;

    if (!world)
        return (84);
    if (za_warudo(world) != 0)
        return (84);
    pos.id = 0;
    pos.x_max = my_strlen(world[0]);
    for (int i = 0; world[i] != NULL; i++)
        pos.y_max++;
    for (int i = 0; world[i] != NULL; i++) {
        for (int j = 0; world[i][j] != '\0'; j++) {
            pos.x = j;
            pos.y = i;
            is_island(world, &pos);
        }
    }
    return (pos.id);
}
