/*
** main2.c for my_sokoban in /home/brice/epitech/PSU_2016_my_sokoban
** 
** Made by lang-nguyen brice
** Login   <brice@epitech.net>
** 
** Started on  Wed Dec 14 13:59:28 2016 lang-nguyen brice
** Last update Mon Dec 19 16:55:14 2016 lang-nguyen brice
*/

#include <curses.h>
#include "include/my.h"

int	key(char *map, char *map_reload, int i, t_my_size *size)
{
  int	key;

  key = getch();
  if (key == 27)
    {
      getch();
      key = getch();
    }
  if (key == 67)
    to_right(map);
  else if (key == 68)
    to_left(map);
  else if (key == 65)
    to_up(map, size);
  else if (key == 66)
    to_down(map, size);
  else if (key == 32)
    reload_map(map_reload, map);
  check_o(map_reload, map);
  if (check(map, map_reload))
    i--;
  return (i);
}
