/*
** EPITECH PROJECT, 2019
** s
** File description:
** s
*/

int     my_strcmp(char *s1, char *s2)
{
    int i;
    i = 0;
    while (s1[i]){
        if (s1[i] < s2[i])
            return (-1);
        if (s1[i] > s2[i])
            return (1);
        i++;
    }
    if (s1[i] < s2[i])
        return (-1);
    if (s1[i] > s2[i])
        return (1);
    return (0);
}
