/*
** how_many_X.c for my_sokoban in /home/brice/epitech/PSU_2016_my_sokoban
** 
** Made by lang-nguyen brice
** Login   <brice@epitech.net>
** 
** Started on  Thu Dec 15 17:43:08 2016 lang-nguyen brice
** Last update Fri Dec 16 12:06:55 2016 lang-nguyen brice
*/

#include "my.h"

int	how_many_x(char *map)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (map[i] != '\0')
    {
      if (map[i] == 'X')
	j++;
      i++;
    }
  return (j);
}
