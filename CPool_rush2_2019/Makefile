##
## EPITECH PROJECT, 2019
##
## File description:
## Makefile
##

SRC	=	rush2.c

NAME	=	rush2

CFLAGS	+=	-I./include -L./lib -Wall -Wextra -g

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
