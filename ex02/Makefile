# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/26 22:27:19 by dolifero          #+#    #+#              #
#    Updated: 2024/09/07 01:53:58 by dolifero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Account
CC			= c++
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f

SRC_FILES	=	Account.cpp tests.cpp

OBJ_FILES	=	Account.o tests.o

all:		$(NAME)

$(NAME):	$(OBJ_FILES)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJ_FILES)

%.o:		%.cpp
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJ_FILES)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re

