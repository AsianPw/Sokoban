/*
** lock_or_not.c for my_sokoban in /home/brice/epitech/PSU_2016_my_sokoban
** 
** Made by lang-nguyen brice
** Login   <brice@epitech.net>
** 
** Started on  Thu Dec 15 17:21:23 2016 lang-nguyen brice
** Last update Sun Dec 18 17:40:29 2016 lang-nguyen brice
*/

#include "include/my.h"

int	lock_or_not(char *map, t_my_size *size, t_my_pos_X *X)
{
  int	i;
  int	j;
  int	posX;
  int	line;

  i = 0;
  j = 0;
  line = size->line;
  while (i < X->nb_X)
    {
      posX = X->pos_X[i];
      if (map[posX-1] == '#' && map[posX+line+1] == '#')
	j++;
      else if (map[posX+1] == '#' && map[posX+line+1] == '#')
	j++;
      else if (map[posX-1] == '#' && map[posX-line-1] == '#')
	j++;
      else if (map[posX+1] == '#' && map[posX-line-1] == '#')
	j++;
      i++;
    }
  if (j == X->nb_X)
    return (1);
  return (0);
}
