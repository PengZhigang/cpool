/*
** EPITECH PROJECT, 2019
** s
** File description:
** s
*/

#include "my_strlen.c"

char *my_revstr(char *str)
{
    int   i;
    int	j;
    char	c;

    i = 0;
    j = my_strlen(str) - 1;
    while (i < j){
        c = str[i];
        str[i] = str[j];
        str[j] = c;
        i = i + 1;
        j = j - 1;
    }
    return str;
}
