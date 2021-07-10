# -*- MakeFile -*-

NAME	= ex03

SRCS	=	AMateria.cpp \
			Character.cpp \
			Cure.cpp \
			Ice.cpp \
			MateriaSource.cpp \
			main.cpp

CC		= clang++

CFLAGS	= -Wall -Wextra -Werror

all:
		$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
		rm -rf $(NAME)

fclean: clean

re: 	clean all

.PHONY: all clean fclean re