#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhourman <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/17 20:48:31 by jhourman          #+#    #+#              #
#    Updated: 2018/07/22 12:56:52 by jhourman         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = create

CFLAGS = -Wall -Werror -Wextra

SRC = $(wildcard srcs/*.c)

HDS = $(wildcard includes/*.h)

OBJ = *.o

LIB = ft.a

all: $(NAME)

$(NAME) :
	gcc $(CFLAGS) -c $(SRC) $(HDS)
	ar -rc lib$(LIB) $(OBJ)
	ranlib lib$(LIB)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f lib$(LIB)

re:	fclean all