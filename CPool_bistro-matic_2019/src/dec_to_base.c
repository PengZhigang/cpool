/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019
** File description:
** dec_to_base
*/

#include "../include/my.h"
#include "../include/bistro_matic.h"
#include <stdlib.h>

char *dec_to_base(char *val, char *base, char *ope)
{
    char *res = malloc(sizeof(char) * (get_len_s(val) + 1));
    for (int i = 0; i < get_len_s(val); ++i) {
        if (val[i] == '-')
            res[i] = ope[3];
        else
            res[i] = base[get_value(val[i])];
    }
    return res;
}