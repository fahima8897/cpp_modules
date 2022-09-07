# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/08 16:51:19 by fboumell          #+#    #+#              #
#    Updated: 2022/09/07 19:16:52 by fboumell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AAnimal

SRCS = main.cpp \
		AAnimal.cpp \
		Dog.cpp \
		Cat.cpp \
		WrongAAnimal.cpp \
		WrongCat.cpp \
		Brain.cpp \

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