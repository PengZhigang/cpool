##
## EPITECH PROJECT, 2019
## mf
## File description:
## mf
##

		SRC	= 	lib/my/my_showstr.c \
			lib/my/my_strlcat.c \
			lib/my/my_find_prime_sup.c \
			lib/my/my_sort_int_tab.c \
			lib/my/my_strlen.c \
			lib/my/my_getnbr.c \
			lib/my/my_square_root.c \
			lib/my/my_strlowcase.c \
			lib/my/my_isneg.c \
			lib/my/my_strcapitalize.c \
			lib/my/my_strncat.c \
			lib/my/my_is_prime.c \
			lib/my/my_strcat.c \
			lib/my/my_strncmp.c \
			lib/my/my_power_rec.c \
			lib/my/my_strcmp.c \
			lib/my/my_strncpy.c \
			lib/my/my_strcpy.c \
			lib/my/my_strstr.c \
			lib/my/my_putchar.c \
			lib/my/my_str_isalpha.c \
			lib/my/my_str_to_wordtab.c \
			lib/my/my_put_nbr.c \
			lib/my/my_str_islower.c \
			lib/my/my_strupcase.c \
			lib/my/my_putstr.c \
			lib/my/my_str_isnum.c \
			lib/my/my_swap.c \
			lib/my/my_revstr.c \
			lib/my/my_str_isprintable.c \
			lib/my/my_showmem.c \
			lib/my/my_str_isupper.c \
			fonction_util.c \
			bonus/fonctionformes.c \
			gestion_erreur.c \

NAME	= librush3.a

OBJ	= $(SRC:.c=.o)

all: $(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	gcc rush3.c -o rush3 -I./include -L. -lrush3 -g
	gcc bonus/rush3_bonus.c -o bonus/rush3_bonus -I./include -L. -lrush3 -g

clean:
	rm -rf $(OBJ)

fclean:		clean
	rm -rf $(NAME)

re: clean fclean all

