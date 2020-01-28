/*
** EPITECH PROJECT, 2019
** cp
** File description:
** cp
*/

#include "include/mylist.h"

int tmy_apply_on_matching_nodes(linked_list_t *begin,
int(*f)(), void const *data_ref, int(*cmp)())
{
    linked_list_t *tmp = begin;
    while (tmp != 0){
        (*f)(tmp->data);
        if (!(*cmp)(tmp->data, data_ref))
            return 0;
        tmp = begin->next;
    }
    return 1;
}