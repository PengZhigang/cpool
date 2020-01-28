/*
** EPITECH PROJECT, 2019
** s
** File description:
** s
*/

#include "include/btree.h"
#include <stdlib.h>

btree_t *btree_create_node(void *item)
{
    btree_t *res = malloc(sizeof(btree_t));
    res->right = 0;
    res->left = 0;
    res->item = item;
    return res;
}