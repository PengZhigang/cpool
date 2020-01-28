/*
** EPITECH PROJECT, 2019
** CPool
** File description:
** descrption
*/

char *my_evil_str(char *str);

void my_swap_c(char *a, char *b);

void my_swap_c(char *a, char *b)
{
    char tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

char *my_evil_str(char *str)
{
    int len = my_strlen(str);
    int j = len - 1;
    for (int i = 0; i < len; i++){
        if (i < j) {
            my_swap_c(&str[i] , &str[j]);
        }
        j--;
    }
    return (str);
}