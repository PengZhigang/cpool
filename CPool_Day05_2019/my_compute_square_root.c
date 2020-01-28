/*
** EPITECH PROJECT, 2019
** cpool05
** File description:
** sssdqsdq
*/

int my_compute_square_root(int nb);

int my_compute_square_root(int nb)
{
    int res = 0;
    if (nb <= 1 && nb > 0){
        return (nb);
    }
    if (nb < 0)
        return (0);
    for (int i = 0; i <= (nb / 2) + 1; i++)
    {
        if ( i > 46340 ){
            break;
        }
        if ( i * i == nb ){
            res = i;
            break;
        }
    }
    return (res);
}