/*
** EPITECH PROJECT, 2019
** cpool
** File description:
** ssstrcpy
*/

void my_swap_c(char *a, char *b)
{
    char tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

char *my_revstr(char *str)
{
    int len = 0;
    char *str1;
    str1 = str;
    while (str[len] != '\0'){
        len++;
    }
    int j = len - 1;
    for (int i = 0; i < len; i++){
        if (i < j) {
            my_swap_c(&str[i] , &str[j]);
        }
        j--;
    }
    return (str);
}