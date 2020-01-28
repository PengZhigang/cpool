/*
** EPITECH PROJECT, 2019
** add
** File description:
** add
*/

#include "../../include/my.h"
#include <stdlib.h>
#include <stdio.h>

int get_len_s(char *str)
{
    int res = 0;
    while (str[res] != '\0')
        res++;
    return res;
}

void boucle(int indice_i, int indice_k, char *res, int r)
{
    if (indice_i == 0 && r >= 10)
        res[indice_k + 1] = '1';
    if (indice_i == 0 && r < 10)
        res[indice_k + 1] = '\0';
}

void boucle1(int indice_i, int indice_k, char *res, int r)
{
    if (indice_i == 1 && r >= 10){
        res[indice_k + 1] = '1';
        res[indice_k + 2] = '-';
    }
    if (indice_i == 1 && r < 10){
        res[indice_k + 1] = '-';
        res[indice_k + 2] = '\0';
    }
}

char *add_pos(char *add1, char *add2)
{
    int j = get_len_s(add2) - 1;
    int tmp = 0;
    int r = 0;
    int k = 0;
    char *res = malloc(sizeof(char) * (get_len_s(add1) + 2));
    for (int i = get_len_s(add1) - 1; i >= 0; i--){
        if (j >= 0)
            r = (int) add1[i] - '0' + (int) add2[j] - '0' + tmp;
        else
            r = (int)add1[i] - '0' + tmp;
        boucle(i, k, res, r);
        tmp = r / 10;
        r = r % 10;
        res[k] = r + '0';
        k++;
        j--;
    }
    return res;
}

char *add_neg(char *add1, char *add2)
{
    int j = get_len_s(add2) - 1;
    int tmp = 0;
    int r = 0;
    int k = 0;
    char *res = malloc(sizeof(char) * (get_len_s(add1) + 2));
    for (int i = get_len_s(add1) - 1; i > 0; i--){
        if (j > 0)
            r = (int) add1[i] - '0' + (int) add2[j] - '0' + tmp;
        else
            r = (int)add1[i] - '0' + tmp;
        boucle1(i, k, res, r);
        tmp = r / 10;
        r = r % 10;
        res[k] = r + '0';
        k++;
        j--;
    }
    return res;
}