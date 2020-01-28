/*
** EPITECH PROJECT, 2019
** cpool
** File description:
** ssstrcpy
*/

char upper(char c)
{
    if (c >= 97 && c <= 122)
        c -= 32;
    return c;
}

char lower(char c)
{
    if (c <= 90 && c >= 65)
        c += 32;
    return c;
}

char *my_strcapitalize(char *str)
{
    int len = 0;
    char *res = str;
    while (str[len] != '\0'){
        len++;
    }
    for (int i = 0; i <len; i++){
        if (i == 0)
            str[i] = upper(str[i]);
        else if (str[i - 1] <= 47 && str[i - 1] >= 32)
            str[i] = upper(str[i]);
        else
            str[i] = lower(str[i]);
    }
    return str;
}