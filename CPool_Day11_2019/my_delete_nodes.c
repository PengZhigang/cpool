/*
** EPITECH PROJECT, 2019
** ss
** File description:
** ss
*/

#include "include/mylist.h"

int my_delete_nodes(linked_list_t **begin, void const *data_ref, int(*cmp)())
{
    linked_list_t *tmp  = *begin;
    while (tmp->next != 0){
        if ((*cmp)(tmp->next->data, data_ref)){
            tmp->next = tmp->next->next;
        }
        tmp = tmp->next;
    }
    return 1;
}