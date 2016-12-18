/*
** where_is_X.c for my_sokoban in /home/brice/epitech/PSU_2016_my_sokoban
** 
** Made by lang-nguyen brice
** Login   <brice@epitech.net>
** 
** Started on  Thu Dec 15 17:23:03 2016 lang-nguyen brice
** Last update Sun Dec 18 17:43:01 2016 lang-nguyen brice
*/

#include <stdlib.h>
#include "include/my.h"

t_my_pos_X	*where_is_X(char *map, t_my_pos_X *X)
{
  int	i;
  int	j;

  X->nb_X = how_many_x(map);
  X->pos_X = malloc(X->nb_X * sizeof(int));
  i = 0;
  j = 0;
  while (map[i] != '\0')
    {
      if (map[i] == 'X')
	{
	  X->pos_X[j] = i;
	  j++;
	}
      i++;
    }
  return (X);
}
