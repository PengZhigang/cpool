/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019
** File description:
** infin_modulo
*/


#include "../../include/bistro_matic.h"
#include "../../include/my.h"
#include <stdlib.h>

char *infin_modulo_op(char *d1, char *d2)
{
    char *tmp = malloc(sizeof(char) * get_len_s(d2) + 1);
    int i = 0;
    if (isneg(d1))
        ++d1;
    if (isneg(d2))
        ++d2;
    my_strncpy(tmp, d1, 1);
    while (*d1 != '\0') {
        if (i++ == 0) ++d1;
        while (cmp_absolu(tmp, d2) == 0) {
            tmp = my_strcat_char(tmp, *d1);
            ++d1;
        }tmp = delet0(tmp);
        while (cmp_absolu(tmp, d2) > 0) {
            tmp = infin_substract(tmp, d2);
        }
    } return tmp;
}

char *infin_modulo(char *d1, char *d2)
{
    if (cmp_absolu(d1, d2) == 0) {
        if (isneg(d2) == 1 && isneg(d1) == 1)
            return d1;
        if (isneg(d2) == 1 && isneg(d1) == 0)
            return add_minus_sign(d1);
        if (isneg(d2) == 0 && isneg(d1) == 1)
            return ++d1;
        if (isneg(d2) == 0 && isneg(d1) == 0)
            return d1;
    }
    if (d2[0] == '0'){
        my_putstr(ERROR_MSG);
        exit(84);
    }
    if (isneg(d2))
        return add_minus_sign(infin_modulo_op(d1, d2));
    return infin_modulo_op(d1, d2);
}