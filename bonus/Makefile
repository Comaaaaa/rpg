##
## EPITECH PROJECT, 2020
## Makefile addition
## File description:
## Makefile addition
##

SRC	=	main.c	\
		menu.c	\
		fight.c	\
		timer.c	\

NAME	=	my_rpg

CPPFLAGS = -I include -lcsfml-graphics -lcsfml-audio -lcsfml-system -lcsfml-window

CC = gcc

all:     $(NAME)

$(NAME):
	@$(CC) -o $(NAME) $(SRC) $(CPPFLAGS)

clean:
	@rm -f *~

fclean: clean
	@rm -f $(NAME)

re:	fclean all
