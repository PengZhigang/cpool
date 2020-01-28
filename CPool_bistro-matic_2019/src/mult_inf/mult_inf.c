/*
** EPITECH PROJECT, 2019
** mult_inf.c
** File description:
** toto
*/

#include "../../include/my.h"
#include <stdlib.h>

char *mult_without_minus(char *str)
{
    int j = 0;
    char *sign = malloc(get_len_s(str));

    if (str[0] == '-') {
        while (str[j] == '-')
            j++;
        for (int i = 0; str[j] != '\0'; i++) {
            sign[i] = str[j];
            j++;
        }
    } else {
        for (int i = 0; str[i] != '\0'; i++)
            sign[i] = str[i];
    }
    return (sign);
}

char *infin_mult(char *nb1, char *nb2)
{
    char *res = malloc(get_len_s(nb1) + get_len_s(nb2) + 1);
    int calc;
    int nb = check_sign(nb1, nb2);
    nb1 = my_revstr(mult_without_minus(nb1));
    nb2 = my_revstr(mult_without_minus(nb2));

    for (int i = 0; i < get_len_s(nb2); i++)
        for (int j = 0; j < get_len_s(nb1); j++) {
            calc = char_int(nb2[i]) * char_int(nb1[j]) + char_int(res[j + i]);
            res[j + i] = int_char(calc % 10);
            res[j + i + 1] = int_char(calc / 10 + char_int(res[j + i + 1]));
        }
    my_revstr(res);
    res = ft_get_nbr(res);
    negative(res, nb);
    return (res);
}