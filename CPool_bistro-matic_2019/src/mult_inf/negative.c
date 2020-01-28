/*
** EPITECH PROJECT, 2019
** negative.c
** File description:
** toto
*/

#include "../../include/my.h"

char *negative(char *res, int sign)
{
    int calc = 0;

    if (res[0] == '0' && res[1] == '\0')
        return (res);
    if (sign == -1) {
        calc = get_len_s(res);
        my_revstr(res);
        res[calc] = '-';
        res[calc + 1] = '\0';
        my_revstr(res);
    }
    return (res);
}