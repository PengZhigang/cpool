/*
** EPITECH PROJECT, 2019
** minus
** File description:
** minus
*/

#include "../../include/my.h"
#include <stdlib.h>
#include <stdio.h>

int cmp(char *m1, char *m2)
{
    int i = 0;
    while (m1[i + 1] == m2[i] && i <= get_len_s(m2))
        i++;
    if (i > get_len_s(m2))
        return 2;
    else if (m1[i + 1] > m2[i])
        return 0;
    else
        return 1;
}

int cmp_absolu(char *m1, char *m2)
{
    char *a = m1;
    char *b = m2;
    int i = 0;
    if (isneg(m1))
        *a++;
    if (isneg(m2))
        *b++;
    if (get_len_s(a) > get_len_s(b))
        return 1;
    else if (get_len_s(a) < get_len_s(b))
        return 0;
    else{
        while (a[i] == b[i] && i <= get_len_s(a)){
        i++;
        } if (i > get_len_s(a))
            return 2;
        else if (b[i] > a[i])
            return 0;
        else
            return 1; }
}

int res_ispos(char *m1, char *m2)
{
    if (isneg(m1)){
        if (get_len_s(m1) > get_len_s(m2) + 1)
            return 0;
        else if (get_len_s(m1) < get_len_s(m2) + 1){
            return 1;
        } else
            return cmp(m1, m2);
    }
    if (isneg(m2)){
        if (get_len_s(m2) > get_len_s(m1) + 1)
            return 0;
        else if (get_len_s(m2) < get_len_s(m1) + 1){
            return 1;
        } else
            return cmp(m2, m1);
    }
}

char *minus(char *m1, char *m2)
{
    char *res = malloc(sizeof(char) * (get_len_s(m1) + 1));
    int j = get_len_s(m2) - 1;
    int k = 0;
    int tmp = 0;
    int r = 0;
    for (int i = get_len_s(m1) - 1; i >= 0 && m1[i] != '-'; i--) {
        if (j >= 0 && m2[j] != '-')
            r = (m1[i] - '0') - (m2[j] - '0') - tmp;
        else
            r = m1[i] - '0' - tmp;
        if (tmp == 1)
            tmp--;
        if (r < 0){
            tmp = 1;
            r = r + 10;
        } res[k] = r + '0';
        k++;
        j--;
    } if (res_ispos(m1, m2) == 0)
        res[k] = '-';
    return res;
}