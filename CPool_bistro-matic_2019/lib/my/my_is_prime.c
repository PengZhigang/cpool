/*
** EPITECH PROJECT, 2019
** CPool_Day13_2019
** File description:
** my_is_prime
*/

int	my_is_prime(int nb)
{
    int	i;

    i = 2;
    if (nb == 0 || nb == 1)
        return (0);
    if (nb == 2)
        return (1);
    while (i < nb) {
        if (nb % i == 0)
            return (0);
        i = i + 1;
    }
    return (1);
}
