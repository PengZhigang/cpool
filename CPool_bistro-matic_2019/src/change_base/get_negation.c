/*
** EPITECH PROJECT, 2019
** bistr
** File description:
** bistro
*/

#include "../../include/my.h"

int is_negation(char *str)
{
    int i = 0;
    int nbr_neg = 0;
    while (str[i] == '-' || str[i] == '+'){
        if (str[i] == '-')
            nbr_neg++;
        i++;
    }
    if (nbr_neg % 2 == 1)
        return 1;
    return 0;
}

char *reduce_num(char *str)
{
    int negation = is_negation(str);
    int a = 0;
    while (*str == '-' || *str == '+'){
        if (str[1] != '-' && str[1] != '+')
            break;
        ++str;
        a++;
    }
    if (negation)
        *str = '-';
    else if (a != 0)
        ++str;
    return str;
}