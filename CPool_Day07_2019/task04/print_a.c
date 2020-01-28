/*
** EPITECH PROJECT, 2019
** cpool
** File description:
** ssstrcpy
*/

#include <unistd.h>

int get_len_m(char const *str)
{
    int len_d = 0;
    int i = 0;
    while (str[i] != '\0'){
        len_d++;
        i++;
    }
    return len_d;
}

int main(int argc, char **argv)
{
    int len = 0;
    for (int i = 0; i < argc; i++){
        len = get_len_m(argv[i]);
        write(1, argv[i], len);
        write(1, "\n", 1);
    }
    return 0;
}