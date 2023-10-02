/*
** EPITECH PROJECT, 2021
** rush 1
** File description:
** rush 1
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