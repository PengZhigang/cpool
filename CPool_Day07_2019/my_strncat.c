/*
** EPITECH PROJECT, 2019
** cpool
** File description:
** ssstrcpy
*/

int get_lenncat(char const *str)
{
    int len_d = 0;
    int i = 0;
    while (str[i] != '\0'){
        len_d++;
        i++;
    }
    return len_d;
}

char *my_strncat(char *dest, char const *src, int nb)
{
    int len_d = get_lenncat(dest);
    int len_s = get_lenncat(src);
    int i = len_d;
    if (nb >= len_s){
        for (i; i < len_d + len_s; i++)
            dest[i] = src[i - len_d];
        dest[i] = '\0';
    }
    else{
        for (i; i < len_d + nb; i++)
            dest[i] = src[i - len_d];
        dest[i] = '\0';
    }
    return dest;
}