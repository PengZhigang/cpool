/*
** EPITECH PROJECT, 2019
** cpool
** File description:
** ssstrcpy
*/

char *my_strncpy(char *dest, char *src, int n)
{
    if (n <= 0)
        return dest;
    int len = 0;
    while (src[len] != '\0'){
        len++;
    }
    for (int i = 0; i < n; i++){
        if (i == len )
            dest[i] = '\0';
        else
            dest[i] = src[i];
    }
    return dest;
}