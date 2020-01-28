/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** toto
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#ifndef __MY_H__
#define __MY_H__
char *str;
int my_compute_factorial_it(int nb);
int my_compute_factorial_rec(int nb);
int my_compute_power_it(int nb, int p);
int my_compute_power_rec(int nb, int p);
int my_compute_factorial_rec(int nb);
int my_compute_square_root(int nb);
char *my_evil_str(char *str);
int my_find_prime_sup(int nb);
int is_valid_int(long nb);
int my_getnbr(char *str);
int my_is_prime(int nb);
int my_isneg(int nb);
int my_print_alpha(void);
int my_print_comb(void);
int my_print_comb_test(int number1, int number2, int number3);
int my_print_comb2(void);
void my_print_gener(char num1, char num2, char num3);
int my_print_digits(void);
int my_print_revalpha(void);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char const * str);
char *my_revstr(char *str);
int my_showmem(char const *str, int size);
int my_showstr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(const char *s1, const char *s2);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
int compare(const char *str, const char *to_find);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);
void my_swap_int(int a, int b);
char *concat_params(int argc, char **argv);
int my_show_word_array(char * const *tab);
char *my_strdup(char const *src);
char **my_str_to_word_array(char const *str);
char **arr_alloc(size_t x, size_t y);
int count_word(char const *str);
int sizeof_2d(char **str);
int my_sort_word_array(char **tab);
int my_get_color(unsigned char red, unsigned char green, unsigned char blue);
int my_swap_endian_color(int color);
char *infin_add(char *m1, char *m2);
int cmp(char *m1, char *m2);
int cmp_absolu(char *m1, char *m2);
char *minus(char *m1, char *m2);
char *add_pos(char *add1, char *add2);
char *add_neg(char *add1, char *add2);
int get_len_s(char *str);
char *number(void);
char *product(int size);
char *factor(int size);
char *sum(int size);
int isneg(char *str);
int is_negation(char *str);
char *reduce_num(char *str);
char *change_base(char *src, int base_src, int base_dest);
char *add_minus_sign(char *s);
char *infin_substract(char *s1, char *s2);
char *infin_div(char *d1, char *d2);
int ft_putstr(char const *);
int ft_strlen(char const *);
char *mult_inf(const char *, const char *);
void add(char *, int, char *, int);
char *ft_strcpy(char *, int);
void zero(char *, int);
void ft_putchar(char);
char *my_strcat_char(char *dest, char src);
char *delet0(char *str);
char *infin_modulo(char *d1, char *d2);
char *infin_mult(char *d1, char *d2);
int loop_two_identical(char *s, char c);
int two_identical(char *s);
int char_int(char c);
int check_sign(char *str1, char *str2);
char *ft_get_nbr(char *nb);
char int_char(char c);
char *negative(char *res, int sign);
int operator_in_base(char *ope, char *base);
int errors(char *buff, char **argv);
int check_ope_size(char *ope);
int empty_expression(char *s);
int unknown_digit(char *s, char *operators, char *base);
int contains_char(char c, char *s);
int unmatched_parenthesis(char *s);
char *dec_to_base(char *val, char *base, char *ope);
int get_value(char ch);
#endif /*__MY_H__*/