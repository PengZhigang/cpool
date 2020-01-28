/*
** EPITECH PROJECT, 2019
** ss
** File description:
** ss
*/

#include "include/mylist.h"

void my_concat_list(linked_list_t **begin1, linked_list_t *begin2)
{
    linked_list_t *tmp = *begin1;
    while (tmp->next != 0){
        tmp = tmp->next;
    }
    tmp->next = begin2;
}