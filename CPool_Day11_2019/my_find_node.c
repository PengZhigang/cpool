/*
** EPITECH PROJECT, 2019
** ss
** File description:
** ss
*/

#include "include/mylist.h"

linked_list_t *my_find_node(linked_list_t const *begin,
void const *data_ref, int(*cmp)())
{
    linked_list_t *tmp = begin;
    while (tmp != 0){
        if ((*cmp)(tmp->data, data_ref)){
            return begin;
        }
        tmp = begin->next;
    }
    return 0;
}