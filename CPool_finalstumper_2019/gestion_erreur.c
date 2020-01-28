/*
** EPITECH PROJECT, 2019
** sss
** File description:
** gestion d'erreur
*/

#include "include/rush3.h"

int is_erreur(char *buff)
{
    int res = 1;
    for (int i = 0; buff[i] != '\0'; i++) {
	if (buff[i] == 'A' || buff[i] == 'B' || buff[i] == 'C' || buff[i] == 'o' ||
        buff[i] == '-' || buff[i] ==  '*' || buff[i] == 92 || buff[i] == '/' ||
        buff[i] == '|' || buff[i] == '\n' || buff[i] == ' ')
	    res *= 1;
	else
	    res *= 0;
    }
    return res;
}
