/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019
** File description:
** tests_base
*/

void main(void)
{
    my_putchar("Test base 16 à base 10 : \n");
    char *rev = change_base("ff", 16, 10);
    if (rev == "255")
        my_putchar("OK");
    else
        my_putchar("KO");
}