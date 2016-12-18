/*
** main.c for my_sokoban in /home/brice/epitech/PSU_2016_my_sokoban
** 
** Made by lang-nguyen brice
** Login   <brice@epitech.net>
** 
** Started on  Sun Dec 11 17:12:41 2016 lang-nguyen brice
** Last update Sun Dec 18 17:46:30 2016 lang-nguyen brice
*/

#include <curses.h>
#include <stdlib.h>
#include "include/my.h"

int	check(char *map)
{
  int	i;

  i = 0;
  while (map[i] != '\0')
    {
      if (map[i] == 'O')
	return (0);
      i++;
    }
  return (1);
}

int		game(char *argv)
{
  char		*map;
  char		*map_reload;
  t_my_size	*size;

  size = malloc(sizeof(size));
  if (size == NULL)
    error(ERROR_MALLOC);
  map = malloc(sizeof(char));
  if (map == NULL)
    error(ERROR_MALLOC);
  nb_for_map(argv, map, size);
  load_map(argv, map, size);
  map_reload = malloc(sizeof(char) * size->text);
  if (map_reload == NULL)
    error(ERROR_MALLOC);
  map_to_reload_map(map, map_reload);
  initscr();
  if (game_while(size, map, map_reload) == 1)
    return (1);
  free(map_reload);
  free(size);
  endwin();
  return (0);
}

int	main(int argc, char **argv)
{
  if (argc != 2)
    error("Problem with param\n");
  else if (argv[1][0] == '-' && argv[1][1] == 'h')
    notice();
  else
    if (game(argv[1]) == 1)
      return (1);
  return (0);
}
