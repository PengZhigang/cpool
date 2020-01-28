/*
** EPITECH PROJECT, 2019
** cpool05
** File description:
** sssdqsdq
*/

int my_compute_factorial_it(int nb)
{
    int res = 1;
    int i = 1;
    if (nb < 0 || nb > 12)
        res = 0;
    else if (nb == 0)
        res = 1;
    else{
        for (i = 1; i <= nb; i++ ){
            res = i * res;
        }
    }
    return res;
}