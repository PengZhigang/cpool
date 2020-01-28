/*
** EPITECH PROJECT, 2019
** cpool05
** File description:
** sssdqsdq
*/

int my_compute_power_it(int nb , int p);

int my_compute_power_it(int nb , int p)
{
    int res = 1 ;
    if (p < 0) {
        res = 0;
    }
    else{
        for (int i = 0 ; i < p; i++){
            res *= nb;
        }
    }
    return res;
}