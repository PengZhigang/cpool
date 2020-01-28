/*
** EPITECH PROJECT, 2019
** s
** File description:
** s
*/

#include "my_putchar.c"

int	my_isneg(int n)
{
    int	positif;
    int	negatif;

    positif = 80;
    negatif = 78;
    if (n >= 0){
        my_putchar(positif);
    }
    else if (n < 0){
        my_putchar(negatif);
    }
}
