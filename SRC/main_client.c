/*
** main.c for minitalk in /home/djerad_k/PSU_2014_minitalk/Client
** 
** Made by Kevin Djeradi
** Login   <djerad_k@epitech.net>
** 
** Started on  Mon Mar 16 12:47:50 2015 Kevin Djeradi
** Last update Thu Nov 26 19:59:43 2015 kevin djeradi
*/

#include "list.h"

int	my_putstr(char *str)
{
  int	a;

  a = 0;
  while (str[a])
    a++;
  if (write(1, str, a) == -1)
    return (1);
  return (0);
}

int	client(int pid, char *str)
{
  int	a;
  int	b;

  a = 0;
  b = 0;
  while (str[a])
    {
      while (b < 8)
	{
	  if ((str[a] >> b & 1) == 0)
	    kill(pid, SIGUSR1);
	  else
	    kill(pid, SIGUSR2);
	  b++;
	  usleep(700);
	}
      b = 0;
      a++;
    }
  return (0);
}

int	main(int argc, char **argv)
{
  int	pid;

  if (argc != 3)
    {
      my_putstr("The client needs 3 arguments\n");
      return (1);
    }
  pid = my_getnbr(argv[1]);
  client(pid, argv[2]);
  client(pid, "\n");
  return (0);
}
