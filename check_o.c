/*
** check_o.c for my_sokoban in /home/brice/epitech/PSU_2016_my_sokoban/src
** 
** Made by lang-nguyen brice
** Login   <brice@epitech.net>
** 
** Started on  Fri Dec 16 23:15:38 2016 lang-nguyen brice
** Last update Fri Dec 16 23:27:13 2016 lang-nguyen brice
*/

char	*remplace_o(char *map_reload, char *map)
{
  int	i;

  i = 0;
  while (map[i] != '\0')
    {
      if (map_reload[i] == 'O' && map[i] == ' ')
	map[i] = 'O';
      i++;
    }
  return (map);
}

char	*check_o(char *map_reload, char *map)
{
  int	i;
  int	nb_o_init;
  int	nb_o;

  i = 0;
  nb_o_init = 0;
  while (map_reload[i] != '\0')
    {
      if (map_reload[i] == 'O')
	nb_o_init++;
      i++;
    }
  i = 0;
  nb_o = 0;
  while (map[i] != '\0')
    {
      if (map[i] == 'O')
	nb_o++;
      i++;
    }
  if (nb_o != nb_o_init)
    remplace_o(map_reload, map);
  return (map);
}
