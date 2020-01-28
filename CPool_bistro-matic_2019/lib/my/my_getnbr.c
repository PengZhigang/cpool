/*
** EPITECH PROJECT, 2019
** CPool_Day13_2019
** File description:
** my_getnbr
*/

#include "../../include/my.h"

int	if_neg(char *str)
{
    int i;
    int sign;

    i = 0;
    sign = 0;
    while (str[i] != '\0' && str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            sign = sign + 1;
        i = i + 1;
    }
    if (sign % 2 != 0)
        return 1;
    else
        return 0;
}

int	my_getnbr(char *str)
{
    int nb;
    int i;
    nb = 0;
    i = 0;
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            nb = nb * 10;
            nb = nb + (str[i] - 48);
            i = i + 1;
        } else if (str[i] <= '0' && str[i] >= '9')
            return (nb);
        else
            i = i + 1;
    }
    if (nb > 20000000000)
        return (0);
    if (if_neg(str))
        return (-nb);
    else
        return nb;
}