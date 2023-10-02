/*
** EPITECH PROJECT, 2021
** my_h
** File description:
** my_h
*/

#ifndef MY_H_
#define MY_H_
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>

void my_putchar(char c);
int my_put_nbr(int nb);
int my_strlen(char const *str);
int my_putstr(char const *str);
int my_put_error_str(char const *str);
char *my_revstr(char *str);
char *my_strlowcase(char *str);

#endif