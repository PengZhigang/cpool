/*
** EPITECH PROJECT, 2019
** cpool
** File description:
** ssstrcpy
*/

int get_lencat(char const *str)
{
    int len_d = 0;
    int i = 0;
    while (str[i] != '\0'){
        len_d++;
        i++;
    }
    return len_d;
}

char *my_strcat(char *dest, char const *src)
{
    int len_d = get_lencat(dest);
    int les_s = get_lencat(src);
    int i = len_d;
    for (i; i < len_d + les_s; i++)
        dest[i] = src[i - len_d];
    dest[i] = '\0';
    return dest;
}