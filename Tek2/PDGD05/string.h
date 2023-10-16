/*
** EPITECH PROJECT, 2023
** PDG
** File description:
** string
*/

#ifndef STRING_H_
    #define STRING_H_
    #include <string.h>
    #include <stdio.h>
    #include <stdlib.h>

typedef struct string_s {
    char *str;
    void (*assign_s)();
    void (*assign_c)();
    void (*append_s)();
    void (*append_c)();
    char (*at)();
    void (*clear)();
    int (*length)();
    int (*compare_s)();
    int (*compare_c)();
    size_t (*copy)();
    const char (*c_str)();
} string_t;

void string_init(string_t *this, const char *s);
void string_destroy(string_t *this);
void assign_c(string_t *this, const char *s);
void assign_s(string_t *this, const string_t *str);
void append_s(string_t *this, const string_t *ap);
void append_c(string_t *this, const char *ap);
char at_at(const string_t *this, size_t pos);
void clear(string_t *this);
int length(const string_t *this);
int compare_s(const string_t *this, const string_t *str);
int compare_c(const string_t *this, const char *str);
size_t copy(const string_t * this, char *s, size_t n, size_t pos);
const char *c_str(const string_t *this);

#endif /* !STRING_H_ */
