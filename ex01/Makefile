# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/30 12:41:02 by fmanzana          #+#    #+#              #
#    Updated: 2023/06/30 12:45:27 by fmanzana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed_point_v2

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	Fixed.cpp\
		main.cpp

OBJS = $(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "fixed_point_v2 compiled"

%.o:	%.cpp
	@$(CC) $(CFLAGS) -c $<

clean:
	@rm -f $(OBJS)

fclean:	clean
	@rm -f $(NAME)
	@echo "Everything cleaned!"

re:		fclean all

.PHONY: all clean fclean re
