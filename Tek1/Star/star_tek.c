/*
** EPITECH PROJECT, 2021
** my_getnbr
** File description:
** c pool day 4
*/

void print_space(int n);

void star_platinium(unsigned int size)
{
    int space_min = size * 2;
    int len = size * 2 + 1;
    int n = (size * 6) - (len * 2) - 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < space_min; j++)
            my_putchar(' ');
        my_putchar('*');
        if (i < size - 1) {
            print_space(n);
            my_putchar('*');
            n -= 2;
        }
        my_putchar('\n');
        space_min++;
    }
}

void jam(void)
{
    for (int i = 0; i < 7; i++) {
        if (i == 3)
            my_putchar(' ');
        else
            my_putchar('*');
    }
    my_putchar('\n');
    for (int i = 0; i < 3; i++)
        my_putchar(' ');
    my_putchar('*');
    my_putchar('\n');
}

int check(unsigned int size)
{
    if (size < 0 || size == 0)
        return (0);
    if (size == 1)
        return (1);
    else
        return (2);

}

void print_d_side(unsigned int size, int len_max, int m, int space_mini)
{
    for (int i = 1; i < size; i++) {
        for (int j = 0; j < m - 1; j++)
            my_putchar(' ');
        my_putchar('*');
        for (int h = 0; h < len_max - 1; h++) {
            my_putchar(' ');
        }
        my_putchar('*');
        len_max += 2;
        my_putchar('\n');
        m--;
    }
    print_line(size, space_mini);
}

void print_side(unsigned int size, int len_max, int space_mini) {
    int n = 1;
    int m = size;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < n; j++) {
            my_putchar(' ');
        }
        n++;
        my_putchar('*');
        for (int h = 0; h < len_max - 5; h++) {
            my_putchar(' ');
        }
        len_max -= 2;
        my_putchar('*');
        my_putchar('\n');
    }
    print_d_side(size, len_max, m, space_mini);
}