# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/30 12:39:42 by fboumell          #+#    #+#              #
#    Updated: 2022/08/30 12:40:15 by fboumell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat

SRCS = main.cpp \
		Bureaucrat.cpp \

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