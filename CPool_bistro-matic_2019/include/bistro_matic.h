/*
** EPITECH PROJECT, 2019
** bistromatic
** File description:
** toto
*/

#define OP_OPEN_PARENT_IDX  0
#define OP_CLOSE_PARENT_IDX  1
#define OP_PLUS_IDX         2
#define OP_SUB_IDX          3
#define OP_NEG_IDX          3
#define OP_MULT_IDX         4
#define OP_DIV_IDX          5
#define OP_MOD_IDX          6

#define EXIT_USAGE    84
#define EXIT_BASE     84
#define EXIT_SIZE_NEG  84
#define EXIT_MALLOC   84
#define EXIT_READ     84
#define EXIT_OPS      84

#define SYNTAX_ERROR_MSG "syntax error\n"
#define ERROR_MSG        "error\n"

char *get_expr(int size);
void check_base(char *b);
void check_ops(char *ops);
void display_help(void);
int check_expr(char **str);
int do_op(int number, char op, int next_number);
int send_error(char *c);
char *change_operators(char *s, char *param_operators);
char *change_chars_to_nbr(char *s, char *base);
