/*
** EPITECH PROJECT, 2019
** v_rec
** File description:
** test
*/

#include "../../include/my.h"
#include "../../include/bistro_matic.h"

char *number(void)
{
    char *res = malloc(sizeof(char) * get_len_s(str));
    int i = 0;
    if (*str == '-') {
        res[0] = '-';
        i++;
        ++str;
    } while ((*str <= '9' && *str >= '0') || (*str <= 'z' && *str >= 'a')
        || (*str <= 'Z' && *str >= 'A')){
        res[i] = *str;
        ++str;
        i++;
    } res[i] = '\0';
    if (*res == '-' && get_len_s(res) == 1){
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_OPS);
    } return (res);
}

char *product(int size)
{
    char *fac1 = factor(size);
    char *fac2;
    while (*str == '*' || *str == '/' || *str == '%'){
        if (*str == '/'){
            ++str;
            fac2 = factor(size);
            fac1 = infin_div(fac1, fac2);
        } else if (*str == '*'){
            ++str;
            fac2 = factor(size);
            fac1 = infin_mult(fac1, fac2);
        } else{
            ++str;
            fac2 = factor(size);
            fac1 = infin_modulo(fac1, fac2);
        }
    } return fac1;
}

char *sum(int size)
{
    char *pro1 = product(size);
    char *pro2;
    while (*str == '+' || *str == '-'){
        if (*str == '+'){
            ++str;
            pro2 = product(size);
            pro1 = infin_add(pro1, pro2);
        }
        else{
            ++str;
            pro2 = product(size);
            pro1 = infin_substract(pro1, pro2);
        }
    }
    return pro1;
}

char *factor(int size)
{
    char *res = malloc(sizeof(char) * get_len_s(str));
    if ((*str <= '9' && *str >= '0')
        || *str == '-' || (*str <= 'z' && *str >= 'a')
        || (*str <= 'Z' && *str >= 'A')){
            return change_base(number(), size, 10);
    } else if (*str == '(') {
        ++str;
        res = sum(size);
        ++str;
        return res;
    } else {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_OPS);
    }
}