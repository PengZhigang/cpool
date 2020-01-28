##
## EPITECH PROJECT, 2019
## cpool
## File description:
## cpool
##

SRC				=				all.c \
								all1.c \
								all2.c \
								all3.c \
								all4.c \
								all5.c \

OBJ        	=        $(SRC:.c=.o)

NAME    	=        libmy.a

$(NAME)    :        $(OBJ)
					@ar rc $(NAME) $(OBJ)
					@cp $(NAME) ../
					@cp mylist.h ../../include

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
