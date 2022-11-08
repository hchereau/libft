NAME = libft.a

SRCS += ft_isdigit.c
SRCS += ft_isalpha.c
SRCS += ft_isalnum.c

OBJS = ${SRCS:.c=.o}

CC    = gcc
RM    = rm -f
AR    = ar rc

CFLAGS    = -Wall -Werror -Wextra

.c.o: ${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:    ${OBJS}
	${AR} ${NAME} ${OBJS}

all:        ${NAME}

clean: 
	${RM} ${OBJS}

fclean:        clean
	${RM} ${NAME}

.PHONY:        all clean fclean
