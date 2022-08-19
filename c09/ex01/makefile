SRCS = srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_putstr.c srcs/ft_putchar.c srcs/ft_swap.c
OBJS = ${SRCS:.c=.o}
INCS = includes/
NAME = libft.a
CC = gcc -Wall -Wextra -Werror
RM = rm -f

all:		${NAME}

${NAME}:	${OBJS}
			ar -rcs ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

%.o:		%.c
			${CC} -o $@ -I${INCS} -c $<
