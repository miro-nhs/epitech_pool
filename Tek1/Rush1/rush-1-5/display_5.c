/*
** EPITECH PROJECT, 2021
** rush_1_5
** File description:
** rush_1_5
*/

void backslash_n(int i, int x)
{
    if (i == x)
        write(1, "\n", 1);
}

void display(int x, int y, int i, int j)
{
    for (i = 1; i <= x; i++) {
        if (x > 1 && y > 1)
            display_my_corner(x, y, i, j);
        if (x == 1 || y == 1)
            my_no_corner(x, y, i, j);
        display_my_border(x, y, i, j);
        backslash_n(i, x);
    }
}

void my_border(int i, int x)
{
    if (i == 1 || i == x)
        write(1, "B", 1);
}

void corner(int i, int x)
{
    if (i == x || i == 1)
        write(1, "B", 1);
}

void my_corner(int j, int y)
{
    if (j == y || j == 1)
        write(1, "B", 1);
}