/*
** reload.c for my_sokoban in /home/brice/epitech/PSU_2016_my_sokoban/src
** 
** Made by lang-nguyen brice
** Login   <brice@epitech.net>
** 
** Started on  Wed Dec 14 12:16:05 2016 lang-nguyen brice
** Last update Wed Dec 14 12:45:13 2016 lang-nguyen brice
*/

#include "my.h"

void	map_to_reload_map(char *map, char *reload_map)
{
  int	i;

  i = 0;
  while (map[i] != '\0')
    {
      reload_map[i] = map[i];
      i++;
    }
}
