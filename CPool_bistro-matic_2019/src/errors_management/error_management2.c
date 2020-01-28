/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019
** File description:
** error_management2
*/

#include "../../include/my.h"
#include "../../include/bistro_matic.h"

int loop_two_identical(char *s, char c)
{
    int i = 0;
    int count = 0;

    while (s[i] != '\0') {
        if (s[i] == c)
            count++;
        ++i;
    }
    if (1 != count)
        return (0);
    return (1);
}

int two_identical(char *s)
{
    int i = 0;

    while (s[i] != '\0') {
        if (loop_two_identical(s, s[i]) == 0)
            return 0;
        ++i;
    }
    return 1;
}

int loop_operator_in_base(char c, char *base)
{
    int i = 0;

    while (base[i] != '\0') {
        if (c == base[i])
            return (0);
        ++i;
    }
    return 1;
}

int operator_in_base(char *ope, char *base)
{
    int i = 0;

    while (ope[i] != '\0') {
        if (loop_operator_in_base(ope[i], base) == 0)
            return (0);
        ++i;
    }
    return (1);
}

int check_ope_size(char *ope)
{
    if (get_len_s(ope) != 7)
        return (0);
    return (1);
}