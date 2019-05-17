/*
** main.c for minitalk in /home/djerad_k/PSU_2014_minitalk/Serveur
** 
** Made by Kevin Djeradi
** Login   <djerad_k@epitech.net>
** 
** Started on  Mon Mar 16 12:40:39 2015 Kevin Djeradi
** Last update Tue Apr 28 16:16:40 2015 kevin djeradi
*/

#include "list.h"

void	my_putchar(int c)
{
  write(1, &c, 1);
}

int	my_putstr(char *str)
{
  int	a;

  a = 0;
  while (str[a])
    a++;
  write(1, str, a);
  return (0);
}

int		fill_my_char(int nb, t_vars *var)
{
  var->a = var->a + (nb << var->b);
  var->b++;
  if (var->b > 7)
    {
      if (var->a != '\n' && var->a)
	my_putchar(var->a);
      else if (var->a == '\n')
	my_putstr("\n");
      var->a = 0;
      var->b = 0;
    }
  return (0);
}

void		get_sig(int signal)
{
  t_vars	var;
  static int	check = 0;

  if (signal == SIGINT)
    exit(0);
  if (check == 0)
    {
      var.a = 0;
      var.b = 0;
      check = 10;
    }
  if (signal == SIGUSR1)
    fill_my_char(0, &var);
  else if (signal ==  SIGUSR2)
    fill_my_char(1, &var);
}

int	main()
{
  my_put_nbr(getpid());
  my_putstr("\n");
  signal(SIGUSR1, get_sig);
  signal(SIGUSR2, get_sig);
  signal(SIGINT, get_sig);
  while (42)
    pause();
  return (0);
}
