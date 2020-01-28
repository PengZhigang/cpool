/*
** EPITECH PROJECT, 2019
** send_error.c
** File description:
** toto
*/

#include "../include/my.h"
#include "../include/bistro_matic.h"

int send_error(char *c)
{
    write(2, c, my_strlen(c));
    return (84);
}
