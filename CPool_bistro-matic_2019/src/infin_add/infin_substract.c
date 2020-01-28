/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019
** File description:
** infin_substract
*/

#include "../../include/my.h"
#include <stdlib.h>

char *absolute_val(char *str)
{
    if (isneg(str) == 1)
        return ++str;
}

char *infin_substract(char *s1, char *s2)
{
    if (isneg(s1) == 0 && isneg(s2) == 0)
        return infin_add(s1, add_minus_sign(s2));
    if (isneg(s1) == 0 && isneg(s2) == 1)
        return infin_add(s1, ++s2);
    if (isneg(s1) == 1 && isneg(s2) == 0)
        return infin_add(s1, add_minus_sign(s2));
    if (isneg(s1) == 1 && isneg(s2) == 1)
        return infin_add(s1, ++s2);
}

char *add_minus_sign(char *s)
{
    char *res = malloc(sizeof(char) * (get_len_s(s) + 2));
    int i = 0;

    res[0] = '-';
    while (s[i] != '\0') {
        res[i + 1] = s[i];
        ++i;
    }
    res[i + 1] = '\0';
    return res;
}