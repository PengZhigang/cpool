/*
** EPITECH PROJECT, 2019
** s
** File description:
** s
*/

#include "my_putchar.c"

int	if_neg(char *str)
{
    int i;
    int sign;
    i = 0;
    sign = 0;
    while (str[i] != '\0' && str[i] == '-' || str[i] == '+'){
        if (str[i] == '-')
            sign = sign + 1;
        i = i + 1;
    }
    if (sign % 2 != 0)
        my_putchar('-');
}

int	my_getnbr(char *str)
{
    int	nb;
    int	i;
    nb = 0;
    i = 0;
    if_neg(str);
    while (str[i] != '\0'){
        if (str[i] >= '0' && str[i] <= '9'){
            nb = nb * 10;
            nb = nb + (str[i] - 48);
            i = i + 1;
        }
        else if (str[i] <= '0' && str[i] >= '9')
            return (nb);
        else
            i = i + 1;
    }
    if (nb > 20000000000)
        return (0);
    return (nb);
}
