/*
** EPITECH PROJECT, 2021
** COUNT_ISLAND
** File description:
** count island
*/

#ifndef COUTN_ISLAND_H_
#define COUTN_ISLAND_H_
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <math.h>

typedef struct s_struct {
    int x;
    int y;
    int id;
    int y_max;
    int x_max;
}t_position;

int my_show_word_array(char **tab);
void my_putstr(char const *str);
int za_warudo(char **world);
int my_strlen(char const *str);
void my_putchar(char c);

#endif
