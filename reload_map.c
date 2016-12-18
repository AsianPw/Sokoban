/*
** reload_map.c for my_sokoban in /home/brice/epitech/PSU_2016_my_sokoban/src
** 
** Made by lang-nguyen brice
** Login   <brice@epitech.net>
** 
** Started on  Wed Dec 14 12:22:27 2016 lang-nguyen brice
** Last update Sun Dec 18 17:41:22 2016 lang-nguyen brice
*/

#include "include/my.h"

void	reload_map(char *reload_map, char *map)
{
  int	i;

  i = 0;
  while (map[i] != '\0')
    {
      map[i] = reload_map[i];
      i++;
    }
}
