/*
** EPITECH PROJECT, 2019
** check_ops.c
** File description:
** toto
*/

#include "../include/my.h"
#include "../include/bistro_matic.h"

void check_ops(char *ops)
{
    if (get_len_s(ops) != 7) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_OPS);
    }
}
