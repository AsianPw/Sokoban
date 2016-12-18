/*
** up.c for my_sokoban in /home/brice/epitech/PSU_2016_my_sokoban/src/move
** 
** Made by lang-nguyen brice
** Login   <brice@epitech.net>
** 
** Started on  Wed Dec 14 12:00:44 2016 lang-nguyen brice
** Last update Sun Dec 18 17:43:13 2016 lang-nguyen brice
*/

#include "include/my.h"

char	*to_up(char *map, t_my_size *size)
{
  int	i;
  int	line;

  line = size->line;
  i = where_is_p(map);
  if (map[i-line-1] == '#')
    return (map);
  else if (map[i-line-1] == 'X' && map[i-(line*2)-2] == 'X')
    return (map);
  else if (map[i-line-1] == 'X' && map[i-(line*2)-2] != '#')
    {
      map[i] = ' ';
      map[i-size->line-1] = 'P';
      map[i-(size->line*2)-2] = 'X';
    }
  else if (map[i-line-1] == ' ' || map[i-line-1] == 'O')
    {
      map[i] = ' ';
      map[i-size->line-1] = 'P';
    }
  return (map);
}
