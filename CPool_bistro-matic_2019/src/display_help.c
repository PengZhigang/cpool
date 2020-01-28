/*
** EPITECH PROJECT, 2019
** display_help.c
** File description:
** toto
*/

#include "../include/my.h"
#include "../include/bistro_matic.h"

void display_help(void)
{
    my_putstr("USAGE\n");
    my_putstr("./calc base operators size_read\n");

    my_putchar('\n');

    my_putstr("DESCRIPTION\n");
    my_putstr("- base: all the symbols of the base\n");
    my_putstr("- operators: the symbols for the parentheses and");
    my_putstr(" the 5 operators\n");
    my_putstr("- size_read: number of characters to be read\n");
}
