/*
** EPITECH PROJECT, 2019
** cpool
** File description:
** sss
*/

int get_len(char const *str)
{
    int len = 0;
    while (str[len] != '\0'){
        len++;
    }
    return len;
}

int is_same(char *str, char const *to_find)
{
    int flag = 1;
    int len_d = get_len(to_find);
    for (int i = 0; i < len_d; i++){
        if (str[i] == to_find[i])
            flag *= 1;
        else
            flag *= 0;
    }
    return flag;
}

char *my_strstr(char *str, char const *to_find)
{
    int flag = 0;
    char *res;
    int len_s = get_len(str);
    int len_d = get_len(to_find);
    for (int i = 0; i < len_s; i++){
        if (is_same(res = str++, to_find)){
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        return res;
    else{
        return "";
    }
}