NAME = run_test

### SRCS

PATH_SRCS = srcs/

MAIN_SRCS += $(PATH_SRCS)/main.test.c

SRCS += ft_isalpha.test.c
SRCS += ft_isdigit.test.c
SRCS += ft_isalnum.test.c
SRCS += ft_isascii.test.c
SRCS += ft_isprint.test.c
SRCS += ft_strlen.test.c
SRCS += ft_memset.test.c
SRCS += ft_bzero.test.c
SRCS += ft_memcpy.test.c
SRCS += ft_memmove.test.c
SRCS += ft_strlcpy.test.c
SRCS += ft_strlcat.test.c
SRCS += ft_toupper.test.c
SRCS += ft_tolower.test.c
SRCS += ft_strchr.test.c
SRCS += ft_strrchr.test.c
SRCS += ft_strncmp.test.c
SRCS += ft_memchr.test.c
SRCS += ft_memcmp.test.c
SRCS += ft_substr.test.c
SRCS += utils.test.c

vpath %.c $(PATH_SRCS)

### OBJS

PATH_OBJS = objs/
OBJS = $(patsubst %.c, $(PATH_OBJS)/%.o, $(SRCS))

### INCLUDES

INCLUDES = -I../
TEST_INCLUDES = -Iincludes/
HEADER = $(INCLUDES)/libft.test.h

### LIB

PATH_LIB = -L../

LIB = ../libft.a

### COMPILATION

CC = clang

CFLAGS += -Werror
CFLAGS += -Wextra
CFLAGS += -Wall
CFLAGS += -fPIE
#CFLAGS += -fsanitize=address,undefined -g3

all: ${NAME}

${NAME}: ${OBJS}
	$(CC) $(CFLAGS) $^ $(LIB) $(MAIN_SRCS) -lbsd -o $@ $(INCLUDES) $(TEST_INCLUDES)

${OBJS}: $(PATH_OBJS)/%.o: %.c
	mkdir -p $(PATH_OBJS)
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES) $(TEST_INCLUDES) 

clean:
	$(RM) -R $(PATH_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean
	$(MAKE)
