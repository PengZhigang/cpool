/*
** EPITECH PROJECT, 2019
** CPool_evalexpr_2019
** File description:
** eval_expr
*/

#include "include/eval_expr.h"
#include <stdlib.h>
#include <stdio.h>

/*
** EPITECH PROJECT, 2019
** v_rec
** File description:
** test
*/

#include "include/eval_expr.h"

int number(void);

int product(void);

int factor(void);

int number(void)
{
    int res = 0;
    int signe = 1;
    if (*str == '-') {
        signe = -1;
        ++str;
    }
    while (*str <= '9' && *str >= '0'){
        res = res * 10 + *str - '0';
        ++str;
    }
    return (signe * res);
}

int product(void)
{
    int fac1 = factor();
    int fac2;
    while (*str == '*' || *str == '/' || *str == '%'){
        if (*str == '/'){
            ++str;
            fac2 = factor();
            fac1 = fac1 / fac2;
        } else if (*str == '*'){
            ++str;
            fac2 = factor();
            fac1 = fac1 * fac2;
        } else{
            ++str;
            fac2 = factor();
            fac1 = fac1 % fac2;
        }
    } return fac1;
}

int sum(void)
{
    int pro1 = product();
    int pro2;
    while (*str == '+' || *str == '-'){
        if (*str == '+'){
            ++str;
            pro2 = product();
            pro1 = pro1 + pro2;
        }
        else{
            ++str;
            pro2 = product();
            pro1 = pro1 - pro2;
        }
    }
    return pro1;
}

int factor(void)
{
    int res = 0;
    if ((*str <= '9' && *str >= '0') || *str == '-')
        return number();
    else if ( *str == '('){
        ++str;
        res = sum();
        ++str;
        return res;
    }
}