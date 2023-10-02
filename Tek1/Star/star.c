/*
** EPITECH PROJECT, 2021
** star
** File description:
** build  a star
*/

void my_putchar(char c);

void print_d_side(unsigned int size, int len_max, int m, int space_mini);

void print_side(unsigned int size, int len_max, int space_mini);

int check(int size);

void star_platinium(unsigned int size);

void print_line(unsigned int size, int space_min) {
    int len_max = size * 6;
    int space = len_max - (space_min * 2) - 3;

    for (int i = 0; i <= space_min; i++)
        my_putchar('*');
    for (int i = 0; i < space; i++)
        my_putchar(' ');
    for (int i = 0; i <= space_min; i++) {
        my_putchar('*');
    }
    my_putchar('\n');
}

void body(int size, int space_min)
{
    print_line(size, space_min);
    print_side(size, size * 6, space_min);
    star_platinium(size);
}

void golden_wind(unsigned int size)
{
    int space_min = size * 3;
    int n = 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < space_min - 1; j++)
            my_putchar(' ');
        my_putchar('*');
        if (i >= 1) {
            for (int j = 0; j < n; j++) {
                my_putchar(' ');
            }
            my_putchar('*');
            n += 2;
        }
        my_putchar('\n');
        space_min--;
    }
    body(size, space_min);
}

void meteor_jam(void)
{
    for (int i = 0; i < 3; i++)
        my_putchar(' ');
    my_putchar('*');
    my_putchar('\n');
    for (int i = 0; i < 7; i++) {
        if (i == 3)
            my_putchar(' ');
        else
            my_putchar('*');
    }
    my_putchar('\n');
    for (int i = 0; i <= 5; i++) {
        if (i == 1 || i == 5)
            my_putchar('*');
        else
            my_putchar(' ');
    }
    my_putchar('\n');
    jam();
}

void star(unsigned int size)
{

    if (check(size) == 0)
        return;
    else if (check(size) == 1)
        meteor_jam();
    else
        golden_wind(size);
}