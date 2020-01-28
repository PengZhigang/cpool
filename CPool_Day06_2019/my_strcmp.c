/*
** EPITECH PROJECT, 2019
** cpool
** File description:
** ssstrcpy
*/

int get_len_c(char const *str)
{
    int len = 0;
    while (str[len] != '\0'){
        len++;
    }
    return len;
}

int my_strcmp(char const *s1, char const *s2)
{
    int res = 0;
    for (int i = 0; i < get_len_c(s1); i++){
        if (s1[i] != s2[i]){
            res = s1[i] - s2[i];
            break;
        }
    }
    return res;
}