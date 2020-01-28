/*
** EPITECH PROJECT, 2019
** check_base.c
** File description:
** toto
*/

#include "../include/my.h"
#include "../include/bistro_matic.h"

void check_base(char *b)
{
    if (get_len_s(b) < 2) {
        my_putstr(SYNTAX_ERROR_MSG);
        my_putchar('\n');
        exit(EXIT_BASE);
    }
}
