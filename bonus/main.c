/*
** main.c for my_sokoban in /home/brice/epitech/PSU_2016_my_sokoban
** 
** Made by lang-nguyen brice
** Login   <brice@epitech.net>
** 
** Started on  Sun Dec 11 17:12:41 2016 lang-nguyen brice
** Last update Tue Dec 20 19:49:06 2016 lang-nguyen brice
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "include/my.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}

void	error(char *str)
{
  write(2, str, my_strlen(str));
  exit(84);
}

int	my_strcomp(char *init, char *dest)
{
  int	i;

  i = 0;
  while (dest[i] != '\0' || init[i] != '\0')
    {
      if (dest[i] != init[i])
	return (0);
      i++;
    }
  return (1);
}

void	size_line(t_my_map *map, t_my_size *size)
{
  int	i;

  i = 0;
  while (map->ini[i] != '\n')
    i++;
  size->line = i;
  return ;
}

void	nb_for_map(t_my_map *map, t_my_size *size, char **argv, int choice)
{
  char	buff[1];
  int	fd;
  int	i;

  if (choice == 0)
    {
      if ((fd = open(argv[1], O_RDONLY)) == -1)
	error(ERROR_OPEN);
    }
  else if (choice == 1)
    {
      if ((fd = open("map/1.wf", O_RDONLY)) == -1)
	error(ERROR_OPEN);
    }
  i = 0;
  while ((read(fd, buff, 1)) != 0)
    i++;
  close(fd);
  size->text = i;
  if (choice == 0)
    {
      if ((fd = open(argv[1], O_RDONLY)) == -1)
	error(ERROR_OPEN);
    }
  else if (choice == 1)
    {
      if ((fd = open("map/1.wf", O_RDONLY)) == -1)
	error(ERROR_OPEN);
    }
  map->ini = malloc(sizeof(char) * i + 1);
  read(fd, map->ini, i);
  close(fd);
  size_line(map, size);
  return ;
}

void	init_map(t_my_map *map, t_my_size *size, char **argv, int choice)
{
  nb_for_map(map, size, argv, choice);
  return ;
}

int		game(char **argv, int choice)
{
  t_my_map	*map;
  t_my_size	*size;

  if ((map = malloc(sizeof(map))) == NULL)
    error(ERROR_MALLOC);
  if ((size = malloc(sizeof(size))) == NULL)
    error(ERROR_MALLOC);
  init_map(map, size, argv, choice);
  free(map->ini);
  free(size);
  free(map);
  return (0);
}

int	main(int argc, char **argv)
{
  if (argc != 2)
    error("Problem with param\n");
  //  else if (my_strcomp(argv[1], "-h"))
  //notice();
  else if (my_strcomp(argv[1], "--level"))
    game(argv, 1);
  return (0);
}
