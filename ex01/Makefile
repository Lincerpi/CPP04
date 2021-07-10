# -*- MakeFile -*-

NAME	= ex01

SRCS	=	Animal.cpp \
			Dog.cpp \
			Cat.cpp \
			Brain.cpp\
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