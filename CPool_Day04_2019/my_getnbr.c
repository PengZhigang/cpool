/*
** EPITECH PROJECT, 2019
** CPool
** File description:
** descrption
*/

int my_getnbr(char const *str);

int get_size(char const *str);

int is_nbr(char c);

int is_positive(char const *str);

int is_sign(char c);

int get_size(char const *str)
{
    int size = my_strlen(str);
    int size_n = 0;
    int flag = 0;
    if (!is_nbr(str[0]) && !is_sign(str[0]))
        return 0;
    for (int i = 0; i < size; i++){
        if (is_nbr(str[i])){
            size_n++;
            flag = 1;
        }
        if (flag == 1 && i < size - 1 && !is_nbr(str[i + 1]))
            break;
    }
    return (size_n);
}

int is_sign(char c)
{
    if (c == '+' || c == '-')
        return (1);
    else
        return (0);
}

int is_nbr(char c)
{
    if (c < 48 || c > 57)
    {
        return (0);
    }
    else
        return (1);
}

int is_positive(char const *str)
{
    int size = my_strlen(str);
    int cpt = 0;
    for (int i = 0; i < size; i++)
    {
        if (is_nbr(str[i]))
            break;
        if (str[i] == '-'){
            cpt++;
        }
    }
    if (cpt % 2 == 0)
        return (0);
    if (cpt % 2 == 1)
        return 1;
}

int my_getnbr(char const *str)
{
    int size_n = get_size(str);
    int tab[size_n];
    int size = my_strlen(str);
    int j = 0;
    char nbr[size_n + 1];
    int res = 0;
    for (int i = 0; i < size; i++){
        if (is_nbr(str[i])){
            nbr[j] = str[i];
            j++;
        }
        if (j == size_n)
            break;
    }
    for (int i = 0; i < size_n; i++){
        tab[i] = nbr[i] - '0';
    }
    for (int i = 0; i < size_n; i++){
        res = res + tab[i];
    }
    return (1);
}