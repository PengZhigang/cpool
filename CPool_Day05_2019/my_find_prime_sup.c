/*
** EPITECH PROJECT, 2019
** cpool05
** File description:
** sssdqsdq
*/

int my_find_prime_sup(int nb);

int my_find_prime_sup(int nb)
{
    int res = nb;
    while (!my_is_prime(res)){
        res++;
    }
    return res;
}
