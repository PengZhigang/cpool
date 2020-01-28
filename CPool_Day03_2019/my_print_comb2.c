/*
** EPITECH PROJECT, 2019
** CPool_Day03
** File description:
** langage_C
*/

void print_condition(int a, int b, int c, int d);

int loop_second2(int a);

int loop_third2(int a, int b);

int loop_fourth2(int a, int b, int c);

int my_print_comb2(void);

int my_print_comb2(void)
{
    int c;
    for (c = 0 ; c <= 9 ; c++) {
        loop_second2(c);
    }
    return (1);
}

int loop_second2(int b)
{
    int c;
    for (c = 0 ; c <= 9 ; c++) {
        loop_third2(b , c);
    }
    return (1);
}

int loop_third2(int a, int b)
{
    int c;
    char d;
    char e;
    char f;
    for (c = 0 ; c <= 9 ; c++) {
        loop_fourth2(a, b, c);
    }
    return (1);
}

int loop_fourth2(int a, int b, int c)
{
    int d;
    int x;
    int y;
    for (d = 0 ; d <= 9 ; d++) {
        x = a * 10 + b;
        y = c * 10 + d;
        if ( x < y ) {
            print_condition(a, b, c, d);
        }
    }
    return (1);
}

void print_condition(int a, int b, int c, int d)
{
    char e;
    char f;
    char g;
    char r;
    int x = a * 10 + b;
    int y = c * 10 + d;
    e = a + '0';
    f = b + '0';
    g = c + '0';
    r = d + '0';
    my_putchar(e);
    my_putchar(f);
    my_putchar(' ');
    my_putchar(g);
    my_putchar(r);
    if ( x < 98 ) {
        my_putchar(',');
        my_putchar(' ');
    }

}