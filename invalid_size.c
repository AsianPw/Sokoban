/*
** invalid_size.c for my_sokoban in /home/brice/epitech/PSU_2016_my_sokoban
** 
** Made by lang-nguyen brice
** Login   <brice@epitech.net>
** 
** Started on  Tue Dec 13 16:19:06 2016 lang-nguyen brice
** Last update Sun Dec 18 17:45:33 2016 lang-nguyen brice
*/

#include <curses.h>
#include "include/my.h"

void	invalid_size(t_my_size *size)
{
  int	i;
  int	nb_lines;

  i = 0;
  nb_lines = (size->text) / (size->line);
  while (i != 1)
    {
      clear();
      mvprintw(LINES/2, (COLS/2)-(17/2), "Resize The window");
      if (getch() != 410 || (LINES >= size->line && COLS >= nb_lines))
	i++;
    }
  clear();
  return ;
}
