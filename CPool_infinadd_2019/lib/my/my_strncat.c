/*
** EPITECH PROJECT, 2019
** s
** File description:
** s
*/

char	*my_strncat(char *dest, char *src, int nb)
{
    int i;
    int j;
    i = 0;
    j = 0;
    while (dest[i] != '\0'){
        i = i + 1;
    }
    while (src[j] != '\0' || j <= nb){
        dest[i] = src[j];
        j = j + 1;
    }
    dest[i] = '\0';
    return (dest);
}
