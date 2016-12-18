/*
** load_map.c for my_sokoban in /home/brice/epitech/PSU_2016_my_sokoban/src
** 
** Made by lang-nguyen brice
** Login   <brice@epitech.net>
** 
** Started on  Tue Dec 13 23:00:16 2016 lang-nguyen brice
** Last update Sun Dec 18 17:39:55 2016 lang-nguyen brice
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "include/my.h"

char	*load_map(char *argv, char *map, t_my_size *size)
{
  int	fd;

  fd = open(argv, O_RDONLY);
  if (fd == -1)
    error(ERROR_OPEN);
  read(fd, map, size->text);
  map[size->text] = '\0';
  return (map);
}
