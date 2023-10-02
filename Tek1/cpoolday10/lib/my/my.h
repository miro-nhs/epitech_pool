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


int my_getnbr(char *str);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char const *str);
int my_show_word_array(char **tab);
int  my_str_isnum(char const *str);
char **my_str_to_word_array(char const *str);
char *my_strdup(char const *src);
int my_strlen(char const *str);
char *my_strncpy(char *dest, char const *src, int n);

#endif
