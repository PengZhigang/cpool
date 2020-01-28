/*
** EPITECH PROJECT, 2019
** s
** File description:
** s
*/

#include "include/btree.h"
#include <stdlib.h>

void btree_insert_data(btree_t **root, void *item, int(*cmpf)())
{
    btree_t *res = *root;
    if (res == 0){
        res = malloc(sizeof(btree_t));
        res->item = &item;
        res->left = 0;
        res->right = 0;
    }
    else if (cmpf(item, res->item) <= 0){
        btree_insert_data(&res->left, item, cmpf);
    }
    else if (cmpf(item, res->item) > 0){
        btree_insert_data(&res->right, item, cmpf);
    }
    *root = res;
}