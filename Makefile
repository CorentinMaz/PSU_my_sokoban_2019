##
## EPITECH PROJECT, 2019
## CPool_bistro-matic_2019
## File description:
## Makefile
##

SRC	=	soko/main.c		\
		soko/syntax_error.c	\
		soko/sokoban.c	\
		soko/cat.c	\
		soko/key.c	\
		soko/moove_p.c	\
		lib/my/my_putchar.c	\
		lib/my/my_put_nbr.c	\
		lib/my/my_put_pos.c	\
		lib/my/my_strlen.c	\
		lib/my/my_putstr.c	\
		lib/my/my_getnbr.c	\
		lib/my/my_revstr.c

CC	=	@gcc  -W -Wall -Wextra -g3

CFLAGS = -I./include/

AR	=	ar rc

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

NAME2	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	@$(AR) $(NAME2) $(OBJ)
	@$(CC) -o $(NAME) $(OBJ) -L. -lncurses

clean:
	@rm -f $(OBJ)
	@rm -f *~

fclean:	clean
	@rm -f $(NAME)
	@rm -f $(NAME2)

re:	fclean all

.PHONY: all clean