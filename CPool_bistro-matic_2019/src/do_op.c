/*
** EPITECH PROJECT, 2019
** do_op.c
** File description:
** toto
*/

#include "my.h"
#include "bistro_matic.h"

int do_op(int number, char operator, int next_number)
{
    switch (operator) {
    case ('+'):
        return (number + next_number);
    case ('-'):
        return (number - next_number);
    case ('/'):
        return (number / next_number);
    case ('*'):
        return (number * next_number);
    case ('%'):
        return (number % next_number);
    }
    return (0);
}
