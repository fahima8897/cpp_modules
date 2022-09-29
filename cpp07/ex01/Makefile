# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/29 17:44:14 by fboumell          #+#    #+#              #
#    Updated: 2022/09/29 17:44:42 by fboumell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Iter

SRCS = main.cpp \

OBJS = ${SRCS:.cpp=.o}

RM = rm -f

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all : ${NAME}

$(NAME) : $(OBJS)
		${CC} ${CFLAGS} ${SRCS} -o ${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : clean fclean re