#Library

NAME = libprintf.a

#Files and folders

SRCS =	src/ft_functions.c				\
		src/ft_format.c				\
		src/ft_printf.c

OBJS = obj/ft_functions.o				\
		obj/ft_format.o				\
		obj/ft_printf.o

#Compiler options 

CC = gcc

RM = rm -rf

INC_DIR = lib

CFLAGS =  -Wall -Wextra -Werror

obj/%.o: src/%.c
	@mkdir -p ./obj/
	@gcc ${FLAGS} -I./lib/ -c $< -o $@

all: $(NAME)

test: ${NAME} main.c
	@gcc ${FLAGS} -I./lib/ -o main main.c libprintf.a && ./main

$(NAME): ${OBJS}
	@ar rc $(NAME) ${OBJS}

clean:
	@${RM} ${OBJS}

fclean: clean
		@${RM} $(NAME) 

re: fclean all

.PHONY: all clean fclean re 