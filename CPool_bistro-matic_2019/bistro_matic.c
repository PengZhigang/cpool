/*
** EPITECH PROJECT, 2019
** bistro_matic.c
** File description:
** toto
*/

#include "include/my.h"
#include "include/bistro_matic.h"

char *readbuff(char **argv)
{
    int buff_size = my_getnbr(argv[3]);
    char *buff = malloc(sizeof(char) * (buff_size) + 1);
    int len;
    check_base(argv[1]);
    check_ops(argv[2]);
    len = read(0, buff, buff_size);
    buff[buff_size] = '\0';
    if (len < 0)
        return (0);
    if (0 == errors(buff, argv)) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_USAGE);
    } buff = change_chars_to_nbr(buff, argv[1]);
    buff = change_operators(buff, argv[2]);
    buff = reduce_num(buff);
    str = buff;
    return buff;
}

int calc(char *base, char *ope, char **argv)
{
    char *val = change_base(sum(get_len_s(argv[1])), 10, get_len_s(argv[1]));
    my_putstr(dec_to_base(val, base, ope));
    my_putchar('\n');
    return (EXIT_SUCCESS);
}

int main(int argc, char *argv[])
{
    char *buff;
    if (argc != 4 || my_strcmp(argv[1], "-h") == 0) {
        display_help();
        return (EXIT_USAGE);
    } buff = readbuff(argv);
    calc(argv[1], argv[2], argv);
}