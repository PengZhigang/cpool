/*
** EPITECH PROJECT, 2019
** CPool
** File description:
** DAY11
*/

#include "include/mylist.h"
#include <stdlib.h>

linked_list_t *my_params_to_list(int ac, char * const *av)
{
    linked_list_t *res = malloc(sizeof(linked_list_t));
    linked_list_t *mi = res;
    if (ac == 1){
        return 0;
    }
    mi->data = av[ac - 1];
    mi->next = 0;
    for (int i = ac - 2; i >= 0; i--){
        linked_list_t *tmp = malloc(sizeof(linked_list_t));
        tmp->data = av[i];
        mi->next = tmp;
        tmp->next = 0;
        mi = tmp;
    }
    return res;
}