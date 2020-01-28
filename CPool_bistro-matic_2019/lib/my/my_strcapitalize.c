/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019
** File description:
** my_strcapitalize
*/

char *my_strcapitalize(char *str)
{
    int i = 0;

    while (str[i]) {
        if ((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] == ' ' || i == 0)) {
            str[i] -= 32;
        }
        i++;
    }
    return str;
}