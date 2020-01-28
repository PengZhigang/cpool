/*
** EPITECH PROJECT, 2019
** CPool_evalexpr_2019
** File description:
** useful specefic functions
*/

#include "../../include/eval_expr.h"
#include <stdlib.h>

char *to_string(char c)
{
    char *res = malloc(sizeof(char) * 2);
    res[0] = c;
    res[1] = '\0';
    return res;
}

int priority(char c)
{
    if (c == '+')
        return 0;
    if (c == '-')
        return 0;
    if (c == '*')
        return 1;
    if (c == '/')
        return 1;
    if (c == '%')
        return 1;
}