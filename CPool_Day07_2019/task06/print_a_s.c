/*
** EPITECH PROJECT, 2019
** cpool
** File description:
** ssstrcpy
*/

#include <unistd.h>

char *my_strcpy_s(char *dest, char *src)
{
    int len = 0;
    while (src[len] != '\0'){
        len++;
    }
    for (int i = 0; i <= len; i++)
        dest[i] = src[i];
    return dest;
}

int get_len_m_r(char const *str)
{
    int len_d = 0;
    int i = 0;
    while (str[i] != '\0'){
        len_d++;
        i++;
    }
    return len_d;
}

void swap_s(char *a, char *b)
{
    char tmp[1000];
    if (a[0] > b[0]){
        my_strcpy_s(tmp, a);
        my_strcpy_s(a, b);
        my_strcpy_s(b, tmp);
    }
}

int main(int argc, char **argv)
{
    int len = 0;
    for (int i = 0; i < argc - 1; i++){
        for (int j = 0; j < argc - 1; j++)
            swap_s(argv[i], argv[i+1]);
    }
    for (int i = 0; i < argc; i++){
        len = get_len_m_r(argv[i]);
        write(1, argv[i], len);
        write(1, "\n", 1);
    }
    return 0;
}