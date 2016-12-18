/*
** my.h for my_sokoban in /home/brice/epitech/PSU_2016_my_sokoban
** 
** Made by lang-nguyen brice
** Login   <brice@epitech.net>
** 
** Started on  Sun Dec 11 17:39:44 2016 lang-nguyen brice
** Last update Fri Dec 16 23:25:37 2016 lang-nguyen brice
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

char		*load_map(char *argv, char *map, t_my_size *size);
char		*to_right(char *map);
char		*to_left(char *map);
char		*to_down(char *map, t_my_size *size);
char		*to_up(char *map, t_my_size *size);
char		*check_o(char *map_reload, char *map);
int		my_strlen(char *str);
int		where_is_p(char *map);
int		key(char *map, char *map_reload, int i, t_my_size *size);
int		check(char *map);
int		win(int i, char *map, t_my_size *size);
int		game_while(t_my_size *size, char *map, char *map_reload);
int		lock_or_not(char *map, t_my_size *size, t_my_pos_X *X);
int		how_many_x(char *map);
t_my_pos_X	*where_is_X(char *map, t_my_pos_X *X);
t_my_size	*nb_for_map(char *argv, char *map, t_my_size *size);
void		notice();
void		error(char *str);
void		invalid_size(t_my_size *size);
void		map_to_reload_map(char *map, char *reload_map);
void		reload_map(char *reload_map, char *map);
