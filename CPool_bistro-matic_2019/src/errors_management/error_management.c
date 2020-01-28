/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019
** File description:
** error_management
*/

#include "../../include/my.h"
#include "../../include/bistro_matic.h"

int errors(char *buff, char **argv)
{
    if (two_identical(argv[1]) == 0)
        return (0);
    if (check_ope_size(argv[2]) == 0 || operator_in_base(argv[2], argv[1]) == 0)
        return (0);
    if (empty_expression(buff) == 1)
        return (0);
    if (unknown_digit(buff, argv[1], argv[2]) == 0)
        return (0);
    if (unmatched_parenthesis(buff) == 0)
        return (0);
    return (1);
}