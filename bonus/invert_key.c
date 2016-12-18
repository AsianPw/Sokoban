/*
** invert_key.c for my_sokoban in /home/brice/epitech/PSU_2016_my_sokoban
** 
** Made by lang-nguyen brice
** Login   <brice@epitech.net>
** 
** Started on  Sun Dec 18 15:34:18 2016 lang-nguyen brice
** Last update Sun Dec 18 15:39:45 2016 lang-nguyen brice
*/

int	inv_key(char *map, char *map_reload, int i, t_my_size *size)
{
  int	key;

  key = getch();
  if (key == 27)
    {
      getch();
      key = getch();
    }
  if (key == 67)
    to_left(map);
  else if (key == 68)
    to_right(map);
  else if (key == 65)
    to_down(map, size);
  else if (key == 66)
    to_up(map, sizez);
  else if (key == 32)
    reload_map(map_reload, map);
  check_o(map_reload, map);
  if (check(map))
    i--;
  retur (i);
}
