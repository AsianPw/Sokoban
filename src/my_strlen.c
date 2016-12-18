/*
** my_strlen.c for my_sokoban in /home/brice/epitech/PSU_2016_my_sokoban
** 
** Made by lang-nguyen brice
** Login   <brice@epitech.net>
** 
** Started on  Tue Dec 13 16:35:59 2016 lang-nguyen brice
** Last update Wed Dec 14 12:27:43 2016 lang-nguyen brice
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}
