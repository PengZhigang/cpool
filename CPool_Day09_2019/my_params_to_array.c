/*
** EPITECH PROJECT, 2019
** cppol
** File description:
** cpool
*/

int get_len_array(char *str)
{
    int len = 0;
    while (str[len] != '\0'){
        len++;
    }
    return len;
}

struct info_param *my_params_to_array (int ac, char **av)
{
    struct info_param *res = malloc(ac * sizeof(struct info_param));
    for (int i = 0; i < ac; i++){
        res[i].length = get_len_array(av[i]);
        res[i].str = malloc(sizeof(char *));
        res[i].str = *av;
        res[i].copy = malloc(res[i].length * sizeof(char) + 1);
        res[i].copy = av[i];
        res[i].word_array = my_str_to_word_array(av[i]);
    }
    return &res[0];
}