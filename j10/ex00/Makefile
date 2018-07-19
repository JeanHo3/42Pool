#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhourman <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/17 20:48:31 by jhourman          #+#    #+#              #
#    Updated: 2018/07/17 21:42:13 by jhourman         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = create

CFLAGS = -Wall -Werror -Wextra

SRC = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c \
	srcs/ft_strcmp.c

OBJ = ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o \
    ft_strcmp.o

all: $(NAME)

$(NAME) :
	gcc $(CFLAGS) -c $(SRC)
	ar -rc libft.a $(OBJ)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re:	fclean all