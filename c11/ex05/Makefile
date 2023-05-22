# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seungjyu <seungjyu@student.24seoul.>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/01 22:34:46 by seungjyu          #+#    #+#              #
#    Updated: 2023/03/13 17:05:15 by seungjyu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = srcs/main.c srcs/ft_operator.c srcs/ft_atoi.c

INCLUDE = srcs/main.h

OBJS = srcs/main.o srcs/ft_operator.o srcs/ft_atoi.o

all : $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o : %.c
	$(CC) $(CFLAGS) -c $^ -o $@ -I$(INCLUDE)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY : all clean fcelan re
