/*
** EPITECH PROJECT, 2019
** rush2
** File description:
** rush
*/

#include <stdio.h>
#include <unistd.h>
#include "step_4.c"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_put_nbr(int nb)
{
    long temp = nb;

    if (temp < 0) {
        my_putchar('-');
        temp = temp * -1;
    }
    if (temp >= 10) {
        my_put_nbr(temp / 10);
        my_put_nbr(temp % 10);
    } else {
        my_putchar(temp + '0');
    }
    return (temp);
}

void print_charac(int freq, int freq_dec, int compteur, char c)
{
    my_putchar(c);
    my_putchar(':');
    my_put_nbr(compteur);
    my_putchar(' ');
    my_putchar('(');
    my_put_nbr(freq);
    my_putchar('.');
    if (freq_dec == 0)
        my_put_nbr(0);
    my_put_nbr(freq_dec);
    my_putchar('%');
    my_putchar(41);
    my_putchar('\n');
}

void rush2(char *str, char c, int j, int tab1[][1])
{
    int compteur = 0;
    int divise = 0;
    int freq = 0;
    int freq_dec = 0;
    int freq_total = 0;
    for (int i = 0;str[i] != '\0';i++){
        if (str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122)
            continue;
        divise++;
        if (str[i] == c || str[i] == c-32 || str[i] == c+32)
            compteur++;
    }
    freq = (compteur*100)/divise;
    freq_dec = (compteur * 10000 / divise) % 100;
    freq_total = freq * 100 + freq_dec;
    cal_p(freq_total, j, tab1);
    print_charac(freq, freq_dec, compteur, c);
}

int main(int argc, char **argv)
{
    float moyen = 0.0;
    float res[4];
    int somme = 0;
    if (argc == 1)
        return 0;
    int tab1[argc - 2][1];
    for (int i = 2; i != argc; i++)
        rush2(argv[1], argv[i][0], i - 2, tab1);
    for (int i = 0; i < argc - 2; i++)
        somme += tab1[i][0];
    moyen = somme / (argc - 2);
    cal_moy(res,argv,argc);
    deter_lang(res,moyen);
    return 0;
}
