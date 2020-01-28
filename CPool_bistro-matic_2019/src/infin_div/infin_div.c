/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019
** File description:
** infin_div
*/

#include "../../include/bistro_matic.h"
#include "../../include/my.h"
#include <stdlib.h>

char *infin_op(char *d1, char *d2)
{
    char *tmp = malloc(sizeof(char) * get_len_s(d2) + 1);
    char *res = malloc(sizeof(char) * get_len_s(d1) + 1);
    char *remain = malloc(sizeof(char) * 2);
    int i = 0;
    remain = "0";
    res = "\0";
    my_strncpy(tmp, d1, 1);
    while (*d1 != '\0') {
        if (i++ == 0) ++d1;
        while (cmp_absolu(tmp, d2) == 0) {
            tmp = my_strcat_char(tmp, *d1);
            ++d1;
        }tmp = delet0(tmp);
        while (cmp_absolu(tmp, d2) > 0) {
            tmp = infin_substract(tmp, d2);
            remain = infin_add(remain, "1");
        } res = my_strcat_char(res, *remain);
        remain = "0";
    } return res;
}

char *infin_div(char *d1, char *d2)
{
    if (d1[0] == '0' || cmp_absolu(d1, d2) == 0)
        return "0";
    if (d2[0] == '0'){
        my_putstr(ERROR_MSG);
        exit(84);
    }
    if (isneg(d1) == 1 && isneg(d2) == 1) {
        ++d1;
        ++d2;
    } if (isneg(d1) == 1 && isneg(d2) == 0) {
        ++d1;
        return add_minus_sign(infin_op(d1, d2));
    } if (isneg(d1) == 0 && isneg(d2) == 1) {
        ++d2;
        return add_minus_sign(infin_op(d1, d2));
    }
    return infin_op(d1, d2);
}