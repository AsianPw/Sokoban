##
## Makefile for my_sokoban in /home/brice/epitech/PSU_2016_my_sokoban
## 
## Made by lang-nguyen brice
## Login   <brice@epitech.net>
## 
## Started on  Sun Dec 11 17:43:57 2016 lang-nguyen brice
## Last update Sun Dec 18 13:37:53 2016 lang-nguyen brice
##

CC	= gcc

RM	= rm -f

CFLAGS	+= -Wall -Wextra
CFLAGS	+= -lncurses
CFLAGS	+= -I./include

NAME	= my_sokoban

SRCS	= main.c \
	key.c \
	game.c \
	src/error.c \
	src/check_o.c \
	src/invalid_size.c \
	src/load_map.c \
	src/map_to_reload_map.c \
	src/my_strlen.c \
	src/notice.c \
	src/reload_map.c \
	src/size.c \
	src/where_is_p.c \
	src/how_many_x.c \
	src/lock_or_not.c \
	src/where_is_x.c \
	src/move/up.c \
	src/move/down.c \
	src/move/left.c \
	src/move/right.c

all: $(NAME)

$(NAME):
	$(CC) $(SRCS) -o $(NAME) $(CFLAGS)

clean:
	$(RM) $(NAME)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
