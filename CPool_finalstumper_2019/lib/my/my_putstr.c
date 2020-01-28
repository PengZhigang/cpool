/*
** EPITECH PROJECT, 2019
** s
** File description:
** s
*/

#include "../../include/rush3.h"

int	my_putstr(char *str)
{
    int	i;
    i = 0;
    while (str[i] != '\0'){
        my_putchar(str[i]);
        i = i + 1;
    }
    return 0;
}
