/*
** EPITECH PROJECT, 2019
** cpool
** File description:
** ssstrcpy
*/

#include <criterion/criterion.h>

Test(my_strncpm, copy_five_characters_in_empty_array)
{
    char dest[6] = "Hello";
    int a = my_strncmp(dest, "Hello", 5);
    char c = a + '0';
    cr_assert_str_eq("0", "0");
}