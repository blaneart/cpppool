# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/12 10:42:33 by ablanar           #+#    #+#              #
#    Updated: 2020/03/12 10:47:22 by ablanar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = SuperCoolPhoneBook

SRC =	Account.cpp ex01.cpp

OBJS =	$(SRC:.cpp=.o)

CC =	clang++

CFLAGS =	-Wall -Wextra -Werror

all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
	clang++ -o $(NAME) $(OBJS) $(CFLAGS)
clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re: fclean all
