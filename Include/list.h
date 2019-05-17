/*
** list.h for minitalk in /home/djerad_k/PSU_2014_minitalk
** 
** Made by Kevin Djeradi
** Login   <djerad_k@epitech.net>
** 
** Started on  Wed Mar 18 03:03:54 2015 Kevin Djeradi
** Last update Sun Mar 22 17:26:10 2015 Kevin Djeradi
*/

#ifndef LIST_H_
# define LIST_H_

# define BUFF_SIZE 20000
# include <sys/types.h>
# include <signal.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct	s_vars
{
  int		a;
  int		b;
  int		c;
}		t_vars;


			/* Server */

int		my_putstr(char *);
void		get_sig(int);
void		get_sig2(int);
long		my_put_nbr(long);
int		my_getnbr(char *);

			/* Client */

int	client(int, char *);


#endif /* !LIST_H_ */
