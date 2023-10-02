/*
** EPITECH PROJECT, 2021
** rush-1-4.c
** File description:
** display a square
*/

void display(int x, int y, int i, int j);
void corner(int i, int x);
void my_corner(int j, int y);
void border(int j, int y);

void display_my_corner(int x, int y, int i, int j)
{
    if (i == 1 && j == 1 || i == 1 && j == y)
        write(1, "A", 1);
    if (i == x && j == 1 || i == x && j == y)
        write(1, "C", 1);
}

void my_border(int i, int x)
{
    if (i == 1 || i == x)
        write(1, "B", 1);
}

void display_my_border(int x, int y, int i, int j)
{
    if (i > 1 && i < x)
        border(j, y);
    if (j > 1 && j < y)
        my_border(i, x);
}

void my_no_corner(int x, int y, int i, int j)
{
    if (y == 1)
        corner(i, x);
    else if (x == 1)
        my_corner(j, y);
}

void rush(int x, int y)
{
    long testx = x;
    long testy = y;
    int i = 1;
    int j = 1;

    if (testx < 1 || testx > 2147483647 || testy < 1 || testy > 2147483647)
        write(2, "Invalid size\n", 13);
    for (j = 1; j <= y; j += 1) {
        for (i = 1; i <= x; i += 1) 
            display(x, y, i, j);
    }
}
