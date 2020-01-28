/*
** EPITECH PROJECT, 2019
** CPOOL
** File description:
** CPool
*/

#include "include/mylist.h"

void my_rev_list(linked_list_t **begin)
{
    linked_list_t *prev = 0;
    linked_list_t *current = *begin;
    linked_list_t *next;
    while (current != 0){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *begin = prev;
}