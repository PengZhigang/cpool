/*
** EPITECH PROJECT, 2019
** s
** File description:
** s
*/

#include "include/mylist.h"
#include <stdlib.h>

int my_apply_on_nides(linked_list_t *begin, int (*f)(void *))
{
    linked_list_t *tmp = begin;
    while (tmp != 0){
        (*f)(tmp->data);
        tmp = begin->next;
    }
    return 0;
}