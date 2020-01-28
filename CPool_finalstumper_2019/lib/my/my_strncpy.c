/*
** EPITECH PROJECT, 2019
** s
** File description:
** s
*/

char	*my_strncpy(char *dest, char *src, int n)
{

    int i;
    i = 0;
    while (src[i] && i < n){
        dest[i] = src[i];
        i = i + 1;
    }
    if (!src [n - 1])
        dest[i] = '\0';
    return (dest);
}
