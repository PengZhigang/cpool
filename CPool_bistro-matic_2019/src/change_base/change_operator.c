/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019
** File description:
** change_operator
*/

#include "../../include/my.h"
#include <stdlib.h>

int contains(char c, char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == c)
            return i;
        ++i;
    }
    return -1;
}

char get_correct_operator(char c, char *param_operator)
{
    char *operators = "()+-*/%";
    int i = 0;
    return (operators[contains(c, param_operator)]);
}

char get_correct_number(char c, char *base)
{
    char *nb = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i = 0;

    int val = contains(c, base);
    return nb[val];
}

char *change_chars_to_nbr(char *s, char *base)
{
    char *res = malloc(sizeof(char) * (10000));
    int i = 0;

    for (i = 0; i < get_len_s(s); ++i) {
        if (contains(s[i], base) != -1)
            res[i] = get_correct_number(s[i], base);
        else
            res[i] = s[i];
    }
    res[i++] = '\0';
    return res;
}

char *change_operators(char *s, char *param_operators)
{
    char *res = malloc(sizeof(char) * (get_len_s(s) + 1));

    for (int i = 0; i < get_len_s(s); ++i) {
        if (contains(s[i], param_operators) != -1)
            res[i] = get_correct_operator(s[i], param_operators);
        else
            res[i] = s[i];
    }
    res[get_len_s(s)] = '\0';
    return res;
}