##
## Makefile for my_sokoban in /home/brice/epitech/PSU_2016_my_sokoban
## 
## Made by lang-nguyen brice
## Login   <brice@epitech.net>
## 
## Started on  Sun Dec 11 17:43:57 2016 lang-nguyen brice
## Last update Tue Dec 20 19:49:36 2016 lang-nguyen brice
##

CC	= gcc

RM	= rm -f

CFLAGS	+= -Wall -Wextra -Werror

NAME	= my_sokoban

SRCS	= main.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -g3 $(OBJS) -lncurses -o $(NAME) $(CFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
