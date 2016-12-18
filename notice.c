/*
** notice.c for my_sokoban in /home/brice/epitech/PSU_2016_my_sokoban
** 
** Made by lang-nguyen brice
** Login   <brice@epitech.net>
** 
** Started on  Sun Dec 11 17:39:23 2016 lang-nguyen brice
** Last update Sun Dec 11 17:42:10 2016 lang-nguyen brice
*/

#include <unistd.h>
#include "include/my.h"

void	notice()
{
  write(1, "USAGE\n", 6);
  write(1, "\t   ./my_sokoban map\n\n", 22);
  write(1, "DESCRIPTION\n", 12);
  write(1, "\t   map\t", 8);
  write(1, "file representing the warehouse map, containing", 47);
  write(1, " '#' for walls,\n", 16);
  write(1, "\t\t'P' for the player, 'X' for boxes and", 39);
  write(1, " '0' for storage locations.\n", 28);
}
