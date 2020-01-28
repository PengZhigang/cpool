/*
** EPITECH PROJECT, 2019
** s
** File description:
** s
*/

char     *my_strstr(char *str, char *to_find)
{
    int i;
    int	n;
    i = 0;
    n = 0;
    while (str[i]){
        if (str[i] == to_find[n])
            n = n + 1;
        else
            n = 0;
        if (!to_find[n]){
            i = i - (n - 1);
            return (str + 1);
        }
        i = i + 1;
    }
    return (0);
}
