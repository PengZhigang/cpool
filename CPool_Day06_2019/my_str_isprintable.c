/*
** EPITECH PROJECT, 2019
** cpool
** File description:
** ssstrcpy
*/

int my_str_isalpha(char const *str)
{
    int len = 0;
    int flag = 1;
    while (str[len] != '\0'){
        len++;
    }
    if (len == 0)
        return 1;
    for (int i = 0; i < len; i++){
        if ((str[i] <= 31 && str[i] >= 0) || str[i] == 127)
            flag *= 0;
        else
            flag *= 1;
    }
    return flag;
}