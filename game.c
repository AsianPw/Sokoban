/*
** game.c for my_sokoban in /home/brice/epitech/PSU_2016_my_sokoban
** 
** Made by lang-nguyen brice
** Login   <brice@epitech.net>
** 
** Started on  Wed Dec 14 15:16:04 2016 lang-nguyen brice
** Last update Sun Dec 18 13:24:49 2016 lang-nguyen brice
*/

#include <ncurses/curses.h>
#include <stdlib.h>
#include <unistd.h>
#include "my.h"

int		game_while(t_my_size *size, char *map, char *map_reload)
{
  int		i;
  t_my_pos_X	*X;

  i = 1;
  X = malloc(sizeof(X));
  if (X == NULL)
    error(ERROR_MALLOC);
  while (i)
    {
      clear();
      if (LINES < size->line+1 || COLS < size->text/size->line+1)
	invalid_size(size);
      printw(map, 0, 0);
      where_is_X(map, X);
      if(lock_or_not(map, size, X))
	return (1);
      i = key(map, map_reload, i , size);
      endwin();
    }
  free(X);
  return (i);
}
