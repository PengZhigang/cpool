/*
** EPITECH PROJECT, 2019
** cpool05
** File description:
** sssdqsdq
*/

int my_compute_factorial_rec(int nb);

int my_compute_factorial_rec(int nb)
{
    int res;
    if (nb == 0) {
        return 1;
    }
    else if (nb < 0 || nb > 12) {
        return 0;
    }
    else{
        res = nb * my_compute_factorial_rec(nb - 1);
        return (res);
    }
}