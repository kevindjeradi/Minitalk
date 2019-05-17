##
## Makefile for minitalk in /home/djerad_k/PSU_2014_minitalk
## 
## Made by Kevin Djeradi
## Login   <djerad_k@epitech.net>
## 
## Started on  Mon Mar 16 12:49:13 2015 Kevin Djeradi
## Last update Sun Mar 22 15:34:39 2015 Kevin Djeradi
##

NAME1		= ./server/server

NAME2		= ./client/client

SRC1		= SRC/main_server.c \
		  SRC/my_getnbr.c \
		  SRC/my_putnbr.c

SRC2		= SRC/main_client.c \
		  SRC/my_getnbr.c \

OBJ1		= $(SRC1:.c=.o)

OBJ2		= $(SRC2:.c=.o)

CFLAGS		= -W -Wall -Werror -Wextra -I./Include

all		: $(NAME1) $(NAME2)

$(NAME1)	: $(OBJ1)
		  @cc -o $(NAME1) $(OBJ1)

$(NAME2)	: $(OBJ2)
		  @cc -o $(NAME2) $(OBJ2)

clean		:
		  @rm -rf $(OBJ1) $(OBJ2)

fclean		: clean
		  @rm -rf $(NAME1) $(NAME2)

re		: fclean all
