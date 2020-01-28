/*
** EPITECH PROJECT, 2019
** check_sign.c
** File description:
** toto
*/

#include "../../include/my.h"

int check_sign(char *str1, char *str2)
{
    int nb = 1;
    int nb1 = 1;

    for (int i = 0; str1[i] == '-'; i++)
        nb *= -1;
    for (int i = 0; str2[i] == '-'; i++)
        nb1 *= -1;
    return (nb * nb1);
}