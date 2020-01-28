/*
** EPITECH PROJECT, 2019
** s
** File description:
** s
*/

int	my_is_prime(int nb)
{
    int	i;

    i = 2;
    if (nb == 0 || nb == 1)
        return (0);
    if (nb == 2)
        return (1);
    while (i < nb){
        if (nb % i == 0)
            return (0);
        i = i + 1;
    }
    return (1);
}
