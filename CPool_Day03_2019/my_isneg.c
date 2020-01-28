/*
** EPITECH PROJECT, 2019
** CPool_Day03
** File description:
** langage_C
*/

int my_isneg(int n);

int my_isneg(int n)
{
    if (n < 0) {
        my_putchar('N');
    }else {
        my_putchar('P');
    }
    return (0);
}