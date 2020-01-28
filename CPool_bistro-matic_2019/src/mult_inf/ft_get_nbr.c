/*
** EPITECH PROJECT, 2019
** ft_get_nbr.c
** File description:
** toto
*/

#include "../../include/my.h"

char *ft_get_nbr(char *nb)
{
    char *str = malloc(get_len_s(nb) + 1);
    int i = 0;

    while (nb[i] == '0')
        i++;
    if (nb[i - 1] == '0' && nb[i] == '\0') {
        str[0] = '0';
        return (str);
    }
    for (int j = 0; nb[i] != '\0'; j++) {
        str[j] = nb[i];
        i++;
    }
    return (str);
}