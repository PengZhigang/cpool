/*
** EPITECH PROJECT, 2019
** DAY_08
** File description:
** Da08
*/

int get_size(char const *str)
{
    int len = 0;
    while (str[len] != '\0' ){
        len++;
    }
    return len;
}

int isalphas_num(char c)
{
    if (c <= 90 && c >= 65)
        return 1;
    if (c >= 97 && c <= 122)
        return 1;
    if (c <= 57 && c >= 48)
        return 1;
    return 0;
}

int get_nbr(char const *str)
{
    int len = 0;
    int cpt = 0;
    while (str[len] != '\0' ){
        if (isalphas_num(str[len]))
            cpt++;
        len++;
    }
    return cpt;
}

int get_nbr_a(char const *str)
{
    int len = 0;
    int cpt = 0;
    while (str[len] != '\0'){
        if (!isalphas_num(str[len]) && isalphas_num(str[len + 1]))
            cpt++;
        len++;
    }
    if (isalphas_num(str[0]))
        return cpt + 1;
    else
        return cpt;
}

char **my_str_to_word_array(char const *str)
{
    int c = 0;
    int line = 0;
    int size = get_size(str);
    char **res = malloc((get_nbr_a(str) + 1) * sizeof(char *));
    for (int i = 0; i < size; i++){
        if (isalphas_num(str[i]))
            c++;
        if (i < size - 1 && !isalphas_num(str[i]) && isalphas_num(str[i + 1])){
            res[line] = malloc((c + 1) * sizeof(char));
            line++;
            c = 0;
        }
        if (i == size - 1)
            res[line] = malloc((c + 1) * sizeof(char));
    }
    res[line + 1] = malloc(sizeof(str));
    res[line + 1] = 0;
    line = c = 0;
    for (int i = 0; i < size; i++){
        if (isalphas_num(*str)){
            res[line][c] = *str;
            c++;
        }
        if (i < size - 1 && !isalphas_num(str[0]) && isalphas_num(str[1])){
            line++;
            c = 0;
        } *str++;
    }
    return res;
}