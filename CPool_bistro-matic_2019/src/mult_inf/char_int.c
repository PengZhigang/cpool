/*
** EPITECH PROJECT, 2019
** char_int.c
** File description:
** toto
*/

#include "../../include/my.h"

int char_int(char c)
{
    if (c == 0)
        return (0);
    return (c - '0');
}