/*
** EPITECH PROJECT, 2019
** cpool
** File description:
** ssstrcpy
*/

#include <criterion/criterion.h>

Test(my_strcapitalize, chage_capital)
{
    char dest[] = "hello";
    char res;
    res = my_strcapitalize(dest);
    cr_assert_str_eq("Hello", "Hello");
}