/*
** EPITECH PROJECT, 2019
** base
** File description:
** base
*/

#include "../../include/my.h"
#include <stdio.h>
#include <stdlib.h>

char *nb = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

char *my_strcpy_char(char *dest, char const *src)
{
    int count = 0;

    while (src[count] != '\0')
        count++;
    for (int i = 0; i < count; i++)
        dest[i] = src[i];
    dest[count] = '\0';
    return dest;
}

char *my_strcat_char(char *dest, char src)
{
    char *c = (char *) malloc(sizeof(char) * (get_len_s(dest) + 1 + 1));
    int len = get_len_s(dest);
    if (c == 0)
        exit(1);
    my_strcpy_char(c, dest);
    c[len] = src;
    c[len + 1] = '\0';
    return c;
}

int get_value(char ch)
{
    if (ch >= '0' && ch <= '9') {
        return ch - '0';
    }
    else if (ch >= 'a' && ch <= 'z') {
        return ch - 'a' + 10;
    }
    else {
        return ch - 'A' + 36;
    }
}

void boucle_base(int *remain, char *tmp, int base_dest)
{
    if (*remain < base_dest){
        tmp = my_strcat_char(tmp, '0');
    } else {
        tmp = my_strcat_char(tmp, nb[*remain/base_dest]);
        *remain %= base_dest;
    }
}

char *change_base(char *src, int base_src, int base_dest)
{
    char *result = malloc(sizeof(char) * 2000);
    char *tmp = malloc(sizeof(char) * 10);
    int remain = 0;
    int flag = 0;
    if (*src == '-') {
        ++src;
        flag = 1;
    } result[0] = '\0';
    while (*src != '\0'){
        remain = 0;
        tmp = "\0";
        for (int i = 0; i < get_len_s(src); i++){
            remain = remain * base_src + get_value(src[i]);
            if (remain < base_dest){
                tmp = my_strcat_char(tmp, '0');
                continue;
            } else {
                tmp = my_strcat_char(tmp, nb[remain/base_dest]);
                remain %= base_dest; }
        } result = my_strcat_char(result, nb[remain]);
        while (*tmp == '0')
            ++tmp;
        src = tmp;
    } if (flag == 1)
        result = my_strcat_char(result, '-');
    return my_revstr(result);
}