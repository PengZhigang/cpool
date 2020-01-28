/*
** EPITECH PROJECT, 2019
** CPool
** File description:
** descrption
*/

int my_putstr(const char *str);

int my_putstr(const char *str)
{
    while (*str != '\0') {
        my_putchar (*str);
        *str++;
    }
    return (0);
}