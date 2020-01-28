/*
** EPITECH PROJECT, 2019
** DAY_08
** File description:
** Da08
*/

#include <unistd.h>

int my_show_word_array(char *const *tab)
{
    int i = 0;
    int j = 0;
    while (tab[i] != 0){
        while (tab[i][j] != '\0'){
            write(1, &tab[i][j], 1);
            j++;
        }
        write(1, "\n", 1);
        i++;
        j = 0;
    }
    return 0;
}