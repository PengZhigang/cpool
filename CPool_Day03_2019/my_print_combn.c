/*
** EPITECH PROJECT, 2019
** CPool_Day03
** File description:
** langage_C
*/
#include <stdio.h>

int my_print_combn(int n);

int my_print_combn(int n)
{
    if (n == 0)
        return 0;
    else {
            for (int i = 0; i < 10; i++) {
            my_putchar('0' + i);
            my_print_combn(n - 1);
            my_putchar(' ');
        }
    }
}