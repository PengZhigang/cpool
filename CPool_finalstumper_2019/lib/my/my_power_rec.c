/*
** EPITECH PROJECT, 2019
** s
** File description:
** s
*/

int	my_power_rec(int nb, int power)
{
    int	x;
    x = nb;
    if (power > 0)
        return (nb = (my_power_rec(nb, power - 1) * x));
    return (1);
}
