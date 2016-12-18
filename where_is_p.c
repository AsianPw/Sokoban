/*
** where_is_p.c for my_sokoban in /home/brice/epitech/PSU_2016_my_sokoban/src
** 
** Made by lang-nguyen brice
** Login   <brice@epitech.net>
** 
** Started on  Wed Dec 14 11:40:10 2016 lang-nguyen brice
** Last update Sun Dec 18 17:42:39 2016 lang-nguyen brice
*/

#include "include/my.h"

int	where_is_p(char *map)
{
  int	i;

  i = 0;
  while (map[i] != 'P')
    i++;
  return (i);
}
