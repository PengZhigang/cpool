##
## EPITECH PROJECT, 2019
## CPool_Day13_2019
## File description:
## Makefile
##

SRC	= 		lib/my/my_showstr.c 									\
			lib/my/my_getnbr.c										\
	  		lib/my/my_strlcat.c 									\
	  		lib/my/my_find_prime_sup.c 								\
	  		lib/my/my_sort_int_tab.c 								\
	  		lib/my/my_strlen.c 										\
	  		lib/my/my_compute_square_root.c							\
	  		lib/my/my_strlowcase.c 									\
	  		lib/my/my_isneg.c 										\
	  		lib/my/my_strcapitalize.c 								\
	  		lib/my/my_strncat.c 									\
	  		lib/my/my_is_prime.c 									\
			lib/my/my_strcat.c 										\
	  		lib/my/my_strncmp.c 									\
	  		lib/my/my_compute_power_rec.c							\
	  		lib/my/my_strcmp.c 										\
	  		lib/my/my_strncpy.c 									\
	  		lib/my/my_strcpy.c 										\
	  		lib/my/my_strstr.c 										\
	  		lib/my/my_putchar.c 									\
	  		lib/my/my_str_isalpha.c 								\
	  		lib/my/my_show_word_array.c 							\
	  		lib/my/my_put_nbr.c 									\
	  		lib/my/my_str_islower.c 								\
	  		lib/my/my_strupcase.c 									\
	  		lib/my/my_putstr.c 										\
	  		lib/my/my_str_isnum.c 									\
			lib/my/my_swap.c 										\
	  		lib/my/my_revstr.c 										\
	  		lib/my/my_str_isprintable.c								\
	  		lib/my/my_showmem.c 									\
			lib/my/my_showstr.c										\
	  		lib/my/my_str_isupper.c									\
			src/get_expr.c											\
			src/check_base.c										\
			src/check_ops.c											\
			src/display_help.c										\
			src/send_error.c										\
			src/change_base/change_operator.c						\
			src/infin_add/add.c										\
			src/infin_add/infin_add.c								\
			src/infin_add/minus.c									\
			src/change_base/get_negation.c      					\
			src/change_base/change_base.c       					\
			src/evalexpr/eval_expr.c            					\
			src/infin_add/infin_substract.c							\
			src/infin_div/infin_div.c								\
			src/infin_modulo/infin_modulo.c							\
			src/mult_inf/mult_inf.c									\
			src/errors_management/error_management.c				\
			src/mult_inf/char_int.c									\
			src/mult_inf/check_sign.c								\
			src/mult_inf/ft_get_nbr.c								\
			src/mult_inf/int_char.c									\
			src/mult_inf/negative.c									\
			src/errors_management/error_management2.c				\
			src/errors_management/error_management3.c				\
			src/dec_to_base.c										\

OBJ		=		$(SRC:.c=.o)

NAME	=		libmy.a

all		: 		$(NAME)

$(NAME)	:		$(OBJ)
				@ar rc $(NAME) $(OBJ)
				gcc bistro_matic.c -L. -o calc -lmy -lm -g

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all