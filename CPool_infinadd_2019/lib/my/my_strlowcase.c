/*
** EPITECH PROJECT, 2019
** s
** File description:
** s
*/

char     *my_strlowcase(char *str)
{
    int	i;
    i = 0;
    while (str[i] >= 'A' && str[i] <= 'Z'){
        str[i] = str[i] + 32;
        i = i + 1;
    }
}
