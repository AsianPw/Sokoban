##
## Makefile for my_sokoban in /home/brice/epitech/PSU_2016_my_sokoban
## 
## Made by lang-nguyen brice
## Login   <brice@epitech.net>
## 
## Started on  Sun Dec 11 17:43:57 2016 lang-nguyen brice
## Last update Sun Dec 18 17:38:01 2016 lang-nguyen brice
##

CC	= gcc

RM	= rm -f

CFLAGS	+= -Wall -Wextra -Werror

NAME	= my_sokoban

SRCS	= main.c \
	key.c \
	game.c \
	error.c \
	check_o.c \
	invalid_size.c \
	load_map.c \
	map_to_reload_map.c \
	my_strlen.c \
	notice.c \
	reload_map.c \
	size.c \
	where_is_p.c \
	how_many_x.c \
	lock_or_not.c \
	where_is_x.c \
	up.c \
	down.c \
	left.c \
	right.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -lncurses -o $(NAME) $(CFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
