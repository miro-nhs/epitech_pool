/*
** EPITECH PROJECT, 2021
** my_h
** File description:
** my_h
*/

#ifndef MY_H_
#define MY_H_
#include <stdlib.h>

int my_compute_power_rec(int nb , int p);
int my_compute_square_root(int nb);
int my_find_prime_sup(int nbr);
int cheks(char *str);
int my_put_nnbr(int nb);
int my_getnbr(char *str);
int my_is_prime(int nbr);
int my_isneg(int n);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_showmem(char const *str, int size);
int my_showstr(char const *str);
int my_str_isalpha(char  const *str);
int my_str_islower(char const *str);
int my_str_isnum(char  const *str);
int my_str_isprintable(char  const *str);
int my_str_isupper(char  const *str);
int my_strncmp(char *s1, char const *s2, int n);
int new_strncmp(char *str, char const *to_find, int n, int b);
int my_strcmp(char *s1, char const *s2);
int my_strlen(char const *str);
int my_show_word_array(char **tab);
int is_root(int x, int nb);
int is_alphanum(char c);
int count_words(char const *str);
int test_cara(char const *str, int a, int test);
char *upercase(char *str, int chara);
char *is_first_letter(char *str, int chara);
char *lowercase(char *str, int chara);
char *my_strdup(char const *src);
char *my_strcpy(char *dest, char const *src);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, const char *src);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, const char *src, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
char *my_revstr(char *str);
char **my_str_to_word_array(char const *str);
void my_swap(int *a, int *b);
void my_putchar(char c);
void my_sort_int_array(int *array, int size);

#endif