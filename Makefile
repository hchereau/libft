NAME = libft.a

### SRCS

SRCS += ft_isalpha.c
SRCS += ft_isdigit.c
SRCS += ft_isalnum.c
SRCS += ft_isascii.c
SRCS += ft_isprint.c
SRCS += ft_strlen.c
SRCS += ft_memset.c
SRCS += ft_bzero.c
SRCS += ft_memcpy.c
SRCS += ft_memmove.c
SRCS += ft_strlcpy.c
SRCS += ft_strlcat.c
SRCS += ft_toupper.c
SRCS += ft_tolower.c
SRCS += ft_strchr.c
SRCS += ft_strrchr.c
SRCS += ft_strncmp.c
SRCS += ft_memchr.c
SRCS += ft_memcmp.c
SRCS += ft_substr.c
SRCS += ft_strjoin.c
SRCS += ft_strtrim.c
SRCS += ft_strnstr.c
SRCS += ft_split.c
#SRCS += ft_atoi.c

### OBJS

PATH_OBJS = objs/

OBJS = $(patsubst %.c, ${PATH_OBJS}/%.o, ${SRCS})

### TESTS

TEST_FOLDER = test/
RUN_TESTS = $(TEST_FOLDER)/run_test

### COMPILATION

CC = clang
CFLAGS += -Werror
CFLAGS += -Wextra
CFLAGS += -Wall
#CFLAGS += -lbsd

ifeq (${debug}, true)
	CFLAGS += -fsanitize=address,undefined -g3
endif

AR = ar rc

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

$(OBJS): ${PATH_OBJS}/%.o: %.c
	mkdir -p ${PATH_OBJS}
	${CC} ${CFLAGS} -c $< -o $@

test: $(NAME)
	$(MAKE) -sC $(TEST_FOLDER)
	echo -n "\n<------TESTS------>\n\n\n"
	./$(RUN_TESTS)

clean:
	${RM} -R ${PATH_OBJS}
	$(MAKE) -C $(TEST_FOLDER) clean

fclean: clean
	${RM} ${NAME}
	$(MAKE) -C $(TEST_FOLDER) fclean

re: fclean
	$(MAKE)

.PHONY: all test clean fclean re
.SILENT: test
