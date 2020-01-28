/*
** EPITECH PROJECT, 2019
** s
** File description:
** s
*/

#include "../../include/rush3.h"

int	my_put_nbr(int nb)
{
    if (nb < 0){
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 10)
        my_put_nbr(nb / 10);
    my_putchar((nb % 10) + 48);
    return 0;
}
