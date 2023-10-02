/*
** EPITECH PROJECT, 2021
** my_print_comb
** File description:
** c pool day 3
*/

void displaye(int a, int b, int c)
{
    my_putchar(c+48);
    my_putchar(b+48);
    my_putchar(a+48);
}

void spaced(void)
{
    my_putchar(',');
    my_putchar(' ');
}

int my_print_comb(void)
{
    int a = 0;
    int b = 0;
    int c = 0;

    for (int i = 0 ; i <= 800 ; i++) {
        a = i%10;
        b = i/10%10;
        c = i/100%10;
        if (c < b && b < a) {
            displaye(a, b, c);
            if (i < 789 ) {
                spaced();
            }
        }
    }
    return (0);
}