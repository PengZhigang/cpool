/*
** EPITECH PROJECT, 2019
** cpool
** File description:
** ssstrcpy
*/

char *my_strcpy(char *dest, char *src)
{
    int len = 0;
    while (src[len] != '\0'){
        len++;
    }
    for (int i = 0; i <= len; i++)
        dest[i] = src[i];
    return dest;
}