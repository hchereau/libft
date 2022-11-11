NAME = libft.a

### SRCS

SRCS += ft_isdigit.c
SRCS += ft_isalpha.c
SRCS += ft_isalnum.c

### OBJS

PATH_OBJS = objs/

OBJS = $(patsubst %.c, ${PATH_OBJS}/%.o, ${SRCS})

### COMPILATION

CC = cc
CFLAGS += -Wall
CFLAGS += -Werror
CFLAGS += -Wextra

ifeq (${debug}, true)
	CFLAGS += -fsanitize=address,undefined -g3
endif

AR = ar rc

all: ${NAME}

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}

${OBJS}: ${PATH_OBJS}/%.o: %.c
	mkdir -p ${PATH_OBJS}
	${CC} ${CFLAGS} -c $< -o $@

clean: 
	${RM} -R ${PATH_OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean
	${MAKE}

.PHONY: all clean fclean re
