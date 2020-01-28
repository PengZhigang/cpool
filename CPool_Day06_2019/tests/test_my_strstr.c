/*
** EPITECH PROJECT, 2019
** cpool
** File description:
** ssstrcpy
*/

#include <criterion/criterion.h>

Test(my_strstr, include_three_characters)
{
    char dest[] = "Hello";
    char sub_str[] = "e";
    char *res = my_strstr(dest, sub_str);
    cr_assert_str_eq("ello", "ello");
}