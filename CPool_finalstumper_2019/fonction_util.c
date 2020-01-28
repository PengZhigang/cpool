/*
** EPITECH PROJECT, 2019
** ss
** File description:
** rush3
*/

#include "include/rush3.h"

int isone(char *buff)
{
    char c = buff[0];
    int flag = 1;
    for (int i = 0; buff[i] != '\0' && c != 'o'; i++) {
        if (buff[i] == c || buff[i] == '\n')
            flag *= 1;
        else
            flag *= 0;
    }
    if (lines(buff) == 1 || colums(buff) == 1)
        return flag;
    return 0;
}

void rush1(char *buff)
{
    my_putstr("[rush1-1] ");
    my_put_nbr(colums(buff));
    my_putchar(' ');
    my_put_nbr(lines(buff));
    my_putchar('\n');
}

void rush2(char *buff)
{
    my_putstr("[rush1-2] ");
    my_put_nbr(colums(buff));
    my_putchar(' ');
    my_put_nbr(lines(buff));
    my_putchar('\n');
}

void rushmlt(char *buff)
{
    my_putstr("[rush1-3] ");
    my_put_nbr(colums(buff));
    my_putchar(' ');
    my_put_nbr(lines(buff));
    my_putstr(" || ");
    my_putstr("[rush1-4] ");
    my_put_nbr(colums(buff));
    my_putchar(' ');
    my_put_nbr(lines(buff));
    my_putstr(" || ");
    my_putstr("[rush1-5] ");
    my_put_nbr(colums(buff));
    my_putchar(' ');
    my_put_nbr(lines(buff));
    my_putchar('\n');
}

void showone(char *buff)
{
    if (isone(buff)){
        switch (buff[0]) {
            case 'o':
                rush1(buff);
                break;
            case '*':
	        rush2(buff);
                break;
            case 'B':
                rushmlt(buff);
                break;
            default :
                return;
        }
    }
}
