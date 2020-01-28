/*
** EPITECH PROJECT, 2019
** Cpool
** File description:
** cpool
*/

#include "include/mylist.h"
#include <stdlib.h>

int my_list_size(linked_list_t const *res)
{
    int r = 0;
    while (res != 0){
        r++;
        res = res->next;
    }
    return r;
}