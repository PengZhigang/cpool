/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** negative or positive value
*/

#include "../../include/my.h"

int my_isneg(int n)
{
    if (n >= 0) {
        my_putchar('P');
    }
    else {
        my_putchar('N');
    }
    return (0);
}