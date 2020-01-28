/*
** EPITECH PROJECT, 2019
** DAY_08
** File description:
** Da08
*/

char *concat_params(int argc, char **argv)
{
    int k = 0;
    int h = 0;
    int len;
    char *res = malloc(sizeof(argv) + ((argc - 1) * sizeof(char)));
    for (int i = 0; i < argc; i++){
        len = 0;
        h = 0;
        while (argv[i][h] != '\0'){
            len++;
            h++;
        }
        for (int j = 0; j < len; j++){

            res[k] = argv[i][j];
            k++;
        }
        if (i != argc - 1) res[k] = '\n';
        k++;
    }
    return res;
}