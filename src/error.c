/*
** error.c for my_sokoban in /home/brice/epitech/PSU_2016_my_sokoban
** 
** Made by lang-nguyen brice
** Login   <brice@epitech.net>
** 
** Started on  Tue Dec 13 16:37:36 2016 lang-nguyen brice
** Last update Wed Dec 14 12:40:27 2016 lang-nguyen brice
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"

void	error(char *str)
{
  write(2, str, my_strlen(str));
  exit (84);
}
