/*
** EPITECH PROJECT, 2019
** bistro
** File description:
** infinadd
*/

#include "../../include/my.h"
#include <stdlib.h>
#include <stdio.h>

int isneg(char *str)
{
    if (str[0] == '-')
        return 1;
    else
        return 0;
}

char *delet0(char *str)
{
    int i = 0;
    int j = 0;
    char *res = malloc(sizeof(char) * (get_len_s(str) + 1));
    int flag = 1;
    while (str[i] != '\0'){
        if (str[i] == '0' && flag == 1){
            i++;
            continue;
        } else if (i == 0 && str[i] == '-'){
            res[j] = str[i];
            j++;
            flag = 1;
        } else{
            flag = 0;
            res[j] = str[i];
            j++;
        } i++;
    } if (res[0] == '\0')
        res[0] = '0';
    return res;
}

char *infin_add(char *m1, char *m2)
{
    if (!isneg(m1) && !isneg(m2)){
        if (get_len_s(m1) > get_len_s(m2))
            return (my_revstr(add_pos(m1, m2)));
        else
            return (my_revstr(add_pos(m2, m1)));
    } else if (isneg(m1) && isneg(m2)){
        if (get_len_s(m1) > get_len_s(m2))
            return (my_revstr(add_neg(m1, m2)));
        else
            my_revstr(add_neg(m2, m1));
    }
    else{
        if (cmp_absolu(m1, m2))
            return (delet0(my_revstr(minus(m1, m2))));
        else
            return (delet0(my_revstr(minus(m2, m1))));
    }
}
