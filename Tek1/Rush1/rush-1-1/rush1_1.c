/*
** EPITECH PROJECT, 2021
** rush-1-1
** File description:
** display a square
*/

void my_dispaly(int x, int y, int j, int k)
{
    if (j == 1 || j == y) {
        if (k == 1 || k == x)
            write(1, "o", 1);
        else
            write(1, "-", 1);
    }
}

void border(int x, int y, int k, int j)
{
    for (k = 1; k <= x; k++) {
        my_dispaly(x, y, j, k);
        if (k == 1 && j != 1 && j != y || k == x && j != 1 && j != y)
            write(1, "|", 1);
        if (k > 1 && k < x && j > 1 && j < y)
            write(1, " ", 1);
    }
}

void rush(int x, int y)
{
    long h = x;
    long u = y;
    int k = 1;
    int j = 1;

    if (h < 1 || h > 2147483647 || u < 1 || u > 2147483647)
        write(2, "Invalid size\n", 13);
    for (j = 1; j <= y; j = j + 1) {
        for (k = 1; k <= x; k = k + 1)
            border(x, y, k, j);
        write(1, "\n", 1);
    }
}