/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019
** File description:
** error_management2
*/

#include "../../include/my.h"
#include "../../include/bistro_matic.h"

int empty_expression(char *s)
{
    if (get_len_s(s) == 0)
        return (1);
    return (0);
}

int contains_c(char c, char *s)
{
    int count = 0;

    for (int i = 0; i < get_len_s(s); ++i) {
        if (c == s[i])
            ++count;
    }
    if (0 == count)
        return 0;
    return 1;
}

int unknown_digit(char *s, char *operators, char *base)
{
    for (int i = 0; i < get_len_s(s); ++i) {
        if (contains_c(s[i], operators) == 0 && contains_c(s[i], base) == 0)
            return 0;
    }
    return 1;
}

int parenthesis_count(char *s)
{
    int count1 = 0;
    int count2 = 0;

    for (int i = 0; i < get_len_s(s); ++i) {
        if ('(' == s[i])
            ++count1;
        else if (')' == s[i])
            ++count2;
    }
    if (count1 != count2)
        return (0);
    return (1);
}

int unmatched_parenthesis(char *s)
{
    int count = 0;

    if (parenthesis_count(s) == 0)
        return (0);
    for (int i = 0; i < get_len_s(s); ++i) {
        if ('(' == s[i])
            ++count;
        else if (')' == s[i])
            --count;
        if (0 > count)
            return (0);
        ++i;
    } return 1;
}