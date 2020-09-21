# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/21 16:31:08 by ablanar           #+#    #+#              #
#    Updated: 2020/09/21 16:32:05 by ablanar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = replace
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

.cpp.o:
			clang++ $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			clang++ $(OBJS) $(CFLAGS) -o $(NAME)

clean:
			rm -f $(OBJS)


fclean:		clean
			rm -f $(NAME)

re:			fclean all
