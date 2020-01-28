/*
** EPITECH PROJECT, 2019
** cpool
** File description:
** ssstrcpy
*/

#include <criterion/criterion.h>

Test(my_revstr, reverse_five_characters)
{
    char dest[] = "Hello";
    my_revstr(dest);
    cr_assert_str_eq(dest, "olleH");
}