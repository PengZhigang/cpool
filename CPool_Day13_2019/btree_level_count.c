/*
** EPITECH PROJECT, 2019
** ss
** File description:
** ss
*/

#include <stddef.h>
#include "include/btree.h"

size_t btree_level_count(btree_t const *root)
{
    size_t m;
    size_t n;
    if (root == 0)
        return 0;
    else{
        m = btree_level_count(root->right);
        n = btree_level_count(root->left);
        if (m > n)
            return (m + 1);
        else
            return (n + 1);
    }
}