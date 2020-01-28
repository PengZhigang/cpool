/*
** EPITECH PROJECT, 2019
** DAY_08
** File description:
** Da08
*/

char *my_strdup(char const *src)
{
    char *res;
    int len = 0;
    int j = 0;
    while (src[j] != '\0'){
        len++;
        j++;
    }
    res = malloc(len);
    for (int i = 0; i < len; i++ ){
        res[i] = src[i];
    }
    return res;
}