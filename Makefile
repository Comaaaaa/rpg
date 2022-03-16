##
## EPITECH PROJECT, 2020
## Makefile addition
## File description:
## Makefile addition
##

SRC	=	main/main.c	\
		main/close.c	\
		animation/move.c	\
		animation/move2.c	\
		animation/move3.c	\
		animation/move4.c	\
		animation/move5.c	\
		draw/draw.c	\
		map/map_start2.c	\
		map/start.c	\
		map/map.c	\
		map/map2.c	\
		map/map3.c	\
		map/map4.c	\
		map/map5.c	\
		map/map6.c	\
		map/map7.c	\
		map/map8.c	\
		map/map9.c	\
		map/start2.c	\
		save/save.c	\
		save/save2.c	\
		fight/fight_struct.c	\
		fight/res_fight.c	\
		fight/res_fight2.c	\
		collision/collision.c	\
		collision/collision2.c     \
		map/map_start.c	\
		map/shop_map.c	\
		inventory/life.c		\
		map/special_map.c	\
		fight/fightinfo.c	\
		fight/fight.c		\
		talk/name.c		\
		talk/str1.c		\
		menufunc/end.c		\
		menufunc/pause2.c	\
		main/second_main.c	\
		pmap/pmap.c       \
		pmap/pmap2.c      \
		pmap/pmap3.c      \
		pmap/pmap4.c      \
		pmap/pmap5.c      \
		pmap/pmap6.c      \
		pmap/pmap7.c      \
		pmap/pmap8.c      \
		pmap/pmap9.c      \
		pmap/pmap_start.c \
		pmap/pshop_map.c  \
		pmap/pstart.c	\
		pmap/pstart2.c	\
		pcollision/pcollision.c   \
	 	pcollision/pcollision2.c     \
		menufunc/status.c	\
		math/math.c		\
		draw/draw_text.c	\
		math/score.c		\
		talk/str2.c		\
		math/position.c	\
		talk/talk.c		\
		talk/talk2.c		\
		fight/fightinfo2.c	\
		menufunc/minimap.c	\
		math/position2.c	\
		math/position3.c	\
		math/position4.c	\
		math/change_file.c		\
		draw/draw2.c		\
		fight/fight_param.c	\
		fight/fight_param2.c    \
		fight/pfight.c		\
		fight/fight2.c		\
		menufunc/menu.c	\
		menufunc/menu2.c	\
		inventory/plife.c	\
		menufunc/pause.c	\
		menufunc/goal.c	\
		menufunc/goal2.c	\
		fight/enemy.c	\
		draw/draw3.c	\
		talk/talk3.c	\
		menufunc/end2.c	\
		math/score2.c	\
		inventory/inventory.c	\
		inventory/check_inv.c	\
		inventory/object.c	\
		menufunc/howtoplay.c	\
		inventory/return.c	\
		inventory/return2.c      \
		animation/move6.c	\
		music/music.c	\
		animation/particule.c	\

NAME	=	my_rpg

CPPFLAGS = -I include -lcsfml-graphics -lcsfml-audio -lcsfml-system -lcsfml-window

CFLAGS = -Wall -Wextra

CC = gcc

all:     $(NAME)

$(NAME):
	$(CC) -o $(NAME) $(SRC) $(CPPFLAGS) $(CFLAGS)

clean:
	rm -f *~

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: re fclean clean all
