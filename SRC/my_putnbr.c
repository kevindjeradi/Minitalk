/*
** my_putnbr.c for minitalk in /home/djerad_k/PSU_2014_minitalk/SRC
** 
** Made by Kevin Djeradi
** Login   <djerad_k@epitech.net>
** 
** Started on  Sun Mar 22 14:14:12 2015 Kevin Djeradi
** Last update Tue Mar 24 20:46:30 2015 Kevin Djeradi
*/

#include "list.h"

void	my_puttchar(char c)
{
  write(1, &c, 1);
}

long	my_put_nbr(long nb)
{
  long	a;
  long	b;

  a = 1;
  b = nb;
  if (nb < 0)
    {
      my_puttchar('-');
      b = b * -1;
    }
  if (nb == 0)
    {
      my_puttchar('0');
      return (0);
    }
  while (b/a != 0)
    a = a * 10;
  a = a / 10;
  while (a != 0)
    {
      my_puttchar((b/a) % 10 + '0');
      a = a / 10;
    }
  return (nb);
}
