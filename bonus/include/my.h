/*
** my.h for my_sokoban in /home/brice/epitech/PSU_2016_my_sokoban
** 
** Made by lang-nguyen brice
** Login   <brice@epitech.net>
** 
** Started on  Sun Dec 11 17:39:44 2016 lang-nguyen brice
** Last update Tue Dec 20 17:23:00 2016 lang-nguyen brice
*/

#define ERROR_OPEN "Unable to load the map\n"
#define ERROR_MALLOC "Problem with malloc\n"

typedef struct s_my_size
{
  int	line;
  int	text;
}		t_my_size;

typedef struct s_my_pos_X
{
  int	*pos_X;
  int	nb_X;
}		t_my_pos_X;

typedef struct s_my_map
{
  char	*ini;
  char	*reload;
  char	*next;
}		t_my_map;
