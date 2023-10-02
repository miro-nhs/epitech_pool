/*
** EPITECH PROJECT, 2021
** my_print_comb2
** File description:
** c pool day 3
*/

void space(void)
{
    my_putchar(',');
    my_putchar(' ');
}

void display(int a, int b, int c, int d)
{
    my_putchar(d + 48);
    my_putchar(c + 48);
    my_putchar(' ');
    my_putchar(b + 48);
    my_putchar(a + 48);
}

int my_print_comb2(void)
{
    int n = 1;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0, m = 0;

    while (n <= 99) {
        a = n % 10;
        b = n / 10 % 10;
        c = m % 10;
        d = m / 10 % 10;
        n++;
        display(a, b, c, d);
        if (d != 9 || c != 8 || b != 9 || a != 9)
            space();
        if (n == 100 && m < 99) {
            m++;
            n = m + 1;
        }
    }
}
