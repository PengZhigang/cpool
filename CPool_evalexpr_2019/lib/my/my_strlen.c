/*
** EPITECH PROJECT, 2019
** CPool_Day04_2019
** File description:
** count chars
*/

#include "../../include/eval_expr.h"

int len(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}