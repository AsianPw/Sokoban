/*
** size.c for my_sokoban in /home/brice/epitech/PSU_2016_my_sokoban/src
** 
** Made by lang-nguyen brice
** Login   <brice@epitech.net>
** 
** Started on  Tue Dec 13 22:53:17 2016 lang-nguyen brice
** Last update Sun Dec 18 17:42:21 2016 lang-nguyen brice
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "include/my.h"

t_my_size	*nb_for_map(char *argv, char *map, t_my_size *size)
{
  int		fd;
  int		i;

  fd = open(argv, O_RDONLY);
  if (fd == -1)
    error(ERROR_OPEN);
  i = 0;
  while ((read(fd, map, 1)) != 0)
    i++;
  close (fd);
  size->text = i;
  fd = open(argv, O_RDONLY);
  if (fd == -1)
    error(ERROR_OPEN);
  map = malloc(sizeof(char) * i + 1);
  read(fd, map, i);
  close(fd);
  i = 0;
  while (map[i] != '\n')
    i++;
  size->line = i;
  return (size);
}
