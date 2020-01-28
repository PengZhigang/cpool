##
## EPITECH PROJECT, 2019
## CPool_Day13_2019
## File description:
## Makefile
##

SRC	= 		./infin_div.c			\

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