# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 11:52:37 by fboumell          #+#    #+#              #
#    Updated: 2022/10/03 11:53:13 by fboumell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Span

SRCS = main.cpp \
		Span.cpp \

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