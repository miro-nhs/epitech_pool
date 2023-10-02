/*
** EPITECH PROJECT, 2021
** rush-1-2.c
** File description:
** Display a square
*/

void display(int x, int y, int i, int j);

void display_my_corner(int x, int y, int i, int j)
{
    if (i == 1 && j == 1 || i == x && j == y)
        write(1, "/", 1);
    if (i == x && j == 1 || i == 1 && j == y)
        write(1, "\\", 1);
}

void display_my_border(int x, int y, int i, int j)
{
    if (i > 1 && i < x) {
        if (j == 1 || j == y)
            write(1, "*", 1);
        else if (j < y && j > 1)
            write(1, " ", 1);
    }
    if (j > 1 && j < y) {
        if (i == 1 || i == x)
            write(1, "*", 1);
    }
}

void my_no_corner(int x, int y, int i, int j)
{
    if (y == 1) {
        if (i == x || i == 1)
            write(1, "*", 1);
    }
    else if (x == 1) {
        if (j == y || j == 1)
            write(1, "*", 1);
    }
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
            display(x, y, i, j);
    }
}

int main()
{
    rush(4,4);
    return (0);
}