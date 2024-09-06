# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/26 22:27:19 by dolifero          #+#    #+#              #
#    Updated: 2024/09/07 01:03:13 by dolifero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= PhoneBook
CC			= c++
CFLAGS		= -Wall -Wextra -Werror -fsanitize=address -g -I ./
RM			= rm -f

SRC_FILES	=	contact.cpp\
				PhoneBook.cpp\
				main.cpp
OBJ_FILES	=	${SRC_FILES:.cpp=.o}

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

