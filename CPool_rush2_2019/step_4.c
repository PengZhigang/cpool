/*
** EPITECH PROJECT, 2019
** rush
** File description:
** rsuh
*/

int const tab[26][4] = {{816, 763, 651, 1152}, {149, 90, 188, 221},
                        {278, 326, 273, 401}, {425, 366, 507, 501},
                        {1270, 1471, 1640, 1218}, {228, 1066, 165, 69},
                        {201, 86, 301, 177}, {609, 73, 457, 70},
                        {697, 752, 655, 624}, {15, 61, 26, 49},
                        {77, 7, 141, 1}, {402, 545, 343, 496},
                        {240, 296, 253, 315}, {674, 709, 977, 671},
                        {750, 579, 259, 868}, {192, 252, 67, 251},
                        {9, 136, 1, 87}, {598, 669, 700, 687},
                        {632, 794, 727, 797}, {905, 724, 615, 463},
                        {275, 631, 416, 292}, {97, 183, 84, 113},
                        {236, 4, 192, 1}, {15, 42, 3, 21},
                        {15, 42, 3, 100}, {7, 32, 113, 46}
                        };

void cal_p(int freq_totle, int i, int t[][1])
{
    t[i][0] = freq_totle;
}

void cal_moy(float res[4], char **argv, int argc)
{
    int somme = 0;
    for (int i = 0; i < 4; i++){
        for (int j = 2 ; j < argc; j++){
            if ( argv[j][0] <= 90)
                somme += tab[((int) argv[j][0] - 65)][i];
            else
                somme += tab[((int) argv[j][0] - 97)][i];
        }
        res[i] = somme / (argc - 2);
        somme = 0;
    }
}

void compare_4(float res[4])
{
    float min = res[0];
    for (int i = 0; i < 3; i++){
        if (res[i] < min )
            min = res[i];
    }
    if (min == res[0])
        write(1, "=> English", 10);
    if (min == res[1])
        write(1, "=> French", 9);
    if (min == res[2])
        write(1, "=> Germany", 10);
    if (min == res[3])
        write(1, "=> Spanish", 10);
}

void deter_lang(float res[4], float moy)
{
    float r[4];
    for (int i = 0; i < 4; i++){
        r[i] = res[i] - moy;
        if (res[i] < moy)
            r[i] = -r[i];
    }
    compare_4(res);
}