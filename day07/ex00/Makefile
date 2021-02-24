# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/24 14:27:49 by ablanar           #+#    #+#              #
#    Updated: 2021/02/24 14:45:29 by ablanar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = whatever

SRC =	main.cpp

OBJS =	$(SRC:.cpp=.o)

CC =	clang++

CFLAGS =	-Wall -Wextra -Werror -std=c++98

all: $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME):	$(OBJS)
	clang++ -o $(NAME) $(OBJS) $(CFLAGS)
clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re: fclean all
