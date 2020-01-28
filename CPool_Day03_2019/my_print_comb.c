/*
** EPITECH PROJECT, 2019
** CPool_Day03
** File description:
** langage_C
*/

int loop_first(void);

int loop_second(int a);

int loop_third(int a, int b);

void print_v(int a);

int my_print_comb(void);

int my_print_comb(void)
{
    loop_first ();
    return (1) ;
}

int loop_first(void)
{
    int c;
    char a;
    for (c = 0 ; c <= 7 ; c++) {
        a = c + '0';
        loop_second(c);
    }
    return (1);
}

int loop_second(int b)
{
    int c;
    char a;
    for (c = 1 ; c <= 8 ; c++) {
        a = c + '0';
        loop_third(b , c);
    }
    return (1);
}

int loop_third(int a, int b)
{
    int c;
    char d;
    char e;
    char f;
    for (c = 2 ; c <= 9 ; c++) {
        f = a + '0';
        e = b + '0';
        d = c + '0';
        if (c > b && b > a){
            my_putchar(f);
            my_putchar(e);
            my_putchar(d);
            print_v(a);
        }
    }
    return (1);
}

void print_v(int a)
{
    if (a != 7) {
        my_putchar(',');
        my_putchar(' ');
    }
}
