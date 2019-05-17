/*
** my_getnbr.c for minitalk in /home/djerad_k/PSU_2014_minitalk/SRC
** 
** Made by Kevin Djeradi
** Login   <djerad_k@epitech.net>
** 
** Started on  Sun Mar 22 14:05:00 2015 Kevin Djeradi
** Last update Sun Mar 22 14:16:35 2015 Kevin Djeradi
*/

int	negative(int nb)
{
  nb = nb % 2;
  return (nb);
}

int	my_getnbr(char *str)
{
  int	nbr;
  int	b;
  int	a;

  a = 0;
  b = 0;
  nbr = 0;
  while (str[b] != '\0')
    {
      if (str[b] == '-' || str[b] == '+')
	{
	  if (str[b] == '-')
	    a = a + 1;
	  b = b + 1;
	}
      else if (str[b] >= '0' && str[b] <= '9')
	{
	  nbr = nbr * 10 + str[b] - '0';
	  b = b + 1;
	}
    }
  if (negative(a) == 1)
    nbr = nbr * -1;
  return (nbr);
}
