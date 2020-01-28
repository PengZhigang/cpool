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
        if (str[i] <= 90 && str[i] >= 65)
            flag *= 1;
        else if (str[i] >= 97 && str[i] <= 122)
            flag *= 1;
        else
            flag *= 0;
    }
    return flag;
}