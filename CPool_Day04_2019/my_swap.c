/*
** EPITECH PROJECT, 2019
** CPool
** File description:
** descrption
*/

void my_swap(int *a, int *b);

void my_swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}