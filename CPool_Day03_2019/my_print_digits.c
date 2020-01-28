/*
** EPITECH PROJECT, 2019
** CPool_Day03
** File description:
** langage_C
*/

int my_print_digits(void)
{
    int c;
    char a;
    for (c = 0; c <= 9; c++) {
        a = '0' + c;
        my_putchar(a);
    }
    return (0);
}

