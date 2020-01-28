/*
** EPITECH PROJECT, 2019
** 
** File description:
** formes
*/

#include "../include/rush3.h"

int compare(int tab[], int line);

int parcour(char *buff, int colum, int line)
{
    int tab[line];
    int cpt = 0;
    int indice = 0;
    for (int i = 0; buff[i] != '\0'; ++i) {
        if (buff[i] != ' ' || buff[i] != '\n' || buff[i] != '\0')
            ++cpt;
        if (buff[i] == '\n') {
            tab[indice] = cpt;
            ++indice;
            cpt = 0;
        }
    }
    compare(tab, line);
    return (0);
}

int compare(int tab[], int line)
{
    int difference = tab[0] - tab[1];
    if (line == 1 && tab[0] == 1)
        return (my_putstr("carre"));
    if (tab[0] == tab[line - 1] == line)
        return (my_putstr("carre"));
    if (tab[0] == tab[line - 1])
        return (my_putstr("rectangle"));
    if(tab[0] == 1 && tab[line - 1] > 1)
        return (my_putstr("pentagone"));
    for (int i = 0; i < line - 1; ++i) {
        if ((tab[i] - tab[++i]) != difference)
            return (0);
    }
    my_putstr("triangle inverse");
}
