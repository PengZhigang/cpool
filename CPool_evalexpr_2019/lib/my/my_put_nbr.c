/*
** EPITECH PROJECT, 2019
** Task 07
** File description:
** displays int as string
*/

#include "../../include/eval_expr.h"

int	my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    } if (nb >= 10)
        my_put_nbr(nb / 10);
    my_putchar((nb % 10) + 48);
}
