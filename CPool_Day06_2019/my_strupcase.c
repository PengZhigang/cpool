/*
** EPITECH PROJECT, 2019
** cpool
** File description:
** ssstrcpy
*/

char *my_strupcase(char *str)
{
    int len = 0;
    while (str[len] != '\0'){
        len++;
    }
    for (int i = 0; i < len; i++){
        if (str[i] >= 97 && str[i] <= 122)
            str[i] -= 32;
    }
    return str;
}