/*
** EPITECH PROJECT, 2019
** ss
** File description:
** ss
*/

#include "include/btree.h"

void *btree_search_item(btree_t const *root, void const *data_ref, int(*cmpf)())
{
    if (root == 0)
        return 0;
    btree_apply_infix(root->left, cmpf);
    if (cmpf(root->item))
        return data_ref;
    btree_apply_infix(root->right, cmpf);
}