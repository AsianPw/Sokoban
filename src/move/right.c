/*
** right.c for my_sokoban in /home/brice/epitech/PSU_2016_my_sokoban/src/move
** 
** Made by lang-nguyen brice
** Login   <brice@epitech.net>
** 
** Started on  Wed Dec 14 11:38:18 2016 lang-nguyen brice
** Last update Fri Dec 16 23:35:26 2016 lang-nguyen brice
*/

#include "my.h"

char	*to_right(char *map)
{
  int	i;

  i = where_is_p(map);
  if (map[i+1] == '#')
    return (map);
  else if (map[i+1] == 'X' && map[i+2] == 'X')
    return (map);
  else if (map[i+1] == 'X' && map[i+2] != '#')
    {
      map[i] = ' ';
      map[i+1] = 'P';
      map[i+2] = 'X';
    }
  else if (map[i+1] == ' ' || map[i+1] == 'O')
    {
      map[i] = ' ';
      map[i+1] = 'P';
    }
  return (map);
}
