/*
** EPITECH PROJECT, 2019
** 
** File description:
** rush3-1
*/

#include <unistd.h>
#include "../include/rush3.h"

int colums(char *buff)
{
    int colums = 0;
    
    for (int i = 0; buff[i] != '\n'; ++i)
        ++colums;
    return (colums);
}

int lines(char *buff)
{
    int lines = 0;

    for (int i = 0; buff[i] != '\0'; ++i) {
        if (buff[i] == '\n')
            ++lines;
    }
    return (lines);
}

void wrush(char *buff, int colums, int lines)
{
    char *rush1 = "[rush1-1] ";
    char *rush2 = "[rush1-2] ";
    char *rush3 = "[rush1-3] ";
    char *rush4 = "[rush1-4] ";
    char *rush5 = "[rush1-5] ";
    
    if (buff[colums - 1] == 'o')
        my_putstr(rush1);
    if (buff[colums - 1] == 92)
        my_putstr(rush2);
    if (buff[colums - 1] == 'A')
        my_putstr(rush3);
    if (buff[(lines - 1) * (colums + 1)] == 'A')
        my_putstr(rush4);
    if (buff[(lines - 1) * (colums + 1)] == 'C')
        my_putstr(rush5);
}

void rush3(char *buff)
{
    int colum = colums(buff);
    int line = lines(buff);
    if (colum > 1 && line > 1) {
        wrush(buff, colum, line);
        my_put_nbr(colum);
        my_putchar(' ');
        my_put_nbr(line);
        my_putchar('\n');
    }
    else
        showone(buff);
    parcour(buff, colum, line);
}


int main(void)
{
    int BUFF_SIZE = 200;
    char buff[BUFF_SIZE + 1];
    int offset = 0;
    int len;
    while ((len = read(0 , buff + offset , BUFF_SIZE - offset)) > 0) {
        offset = offset + len;
    }
    buff[offset] = '\0';
    if (len < 0)
        return (84);
    rush3(buff);
    return (0);
    
}
