/*
** EPITECH PROJECT, 2019
** add
** File description:
** add
*/

#include "include/infin_add.h"
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
        }
        i++;
    } if (res[0] == '\0')
        res[0] = '0';
    return res;
}

int main(int argc, char **argv)
{
    if (!isneg(argv[1]) && !isneg(argv[2])){
        if (get_len_s(argv[1]) > get_len_s(argv[2]))
            my_putstr(my_revstr(add_pos(argv[1], argv[2])));
        else
            my_putstr(my_revstr(add_pos(argv[2], argv[1])));
    } else if (isneg(argv[1]) && isneg(argv[2])){
        if (get_len_s(argv[1]) > get_len_s(argv[2]))
            my_putstr(my_revstr(add_neg(argv[1], argv[2])));
        else
            my_putstr(my_revstr(add_neg(argv[2], argv[1])));
    } else {
        if (cmp_absolu(argv[1], argv[2]))
            my_putstr(delet0(my_revstr(minus(argv[1], argv[2]))));
        else
            my_putstr(delet0(my_revstr(minus(argv[2], argv[1]))));
    }
    return 0;
}