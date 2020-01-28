/*
** EPITECH PROJECT, 2019
** CPool
** File description:
** descrption
*/

int my_strlen(char  const *str);

int my_strlen(char  const *str)
{
    int len = 0;
    while ( *str != '\0'  ) {
        len++;
        *str++;
    }
    return (len);
}