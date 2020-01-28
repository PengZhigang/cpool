/*
** EPITECH PROJECT, 2019
** CPool_Day03
** File description:
** langage_C
*/

#include <stdio.h>

int my_put_nbr(int nbr);

void my_put_nbr_n(void);

int get_cpt(int nbr);

int get_p(int bnr);

void change_to_long(int min);

void change_to_long(int min)
{
    my_putchar('2');
    my_putchar('1');
    my_putchar('4');
    my_putchar('7');
    my_putchar('4');
    my_putchar('8');
    my_putchar('3');
    my_putchar('6');
    my_putchar('4');
    my_putchar('8');
}

void my_put_nbr_n(void)
{
    my_putchar('-');
}

int get_cpt(int nbr)
{
    int cpt = 0;
    while (nbr >= 10) {
        nbr = nbr / 10;
        cpt++;
    }
    return (cpt);
}

int get_p(int c)
{
    int p = 1;
    while (c > 0) {
        p *= 10;
        c--;
    }
    return (p);
}

int my_put_nbr(int nbr)
{
    int a = nbr;
    int cpt = 0;
    int b;
    int res;
    if (nbr < 0) {
        my_put_nbr_n();
        nbr = -nbr;
    }
    if (nbr == 0) {
        my_putchar('0');
    }
    if ( nbr == -2147483648)
        change_to_long(nbr);
    cpt = get_cpt(nbr);
    b = get_p(cpt);
    while (nbr > 0) {
        res = nbr / b;
        my_putchar(res + '0');
        nbr = nbr % b;
        cpt--;
        if (nbr == 0)
        {
            for (int j = 0; j <= cpt; j++ )
                my_putchar('0');
        }
        b = b / 10;
    }
    return (1);
}

