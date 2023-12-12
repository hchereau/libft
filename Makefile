NAME = libft.a

### SRCS

PATH_SRCS = srcs/

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
SRCS += ft_strnstr.c
SRCS += ft_atoi.c
SRCS += ft_calloc.c
SRCS += ft_strdup.c
SRCS += ft_substr.c

vpath %.c $(PATH_SRCS)

### HEADER

INCLUDES_LIBFT = includes/

INCLUDES += -I $(INCLUDES_LIBFT)

### OBJS

PATH_OBJS = objs/

OBJS = $(patsubst %.c, ${PATH_OBJS}/%.o, ${SRCS})

### COMPILATION

CC = clang
CFLAGS += -Werror
CFLAGS += -Wextra
CFLAGS += -Wall

AR = ar rcs

ifeq (${debug}, true)
		CFLAGS += -fsanitize=adress,undefined -g3
endif

### TEST

TEST_FOLDER = libft_tester/
RUN_TESTS = $(TEST_FOLDER)/run_test

### RULE

all: $(NAME)

$(NAME): $(OBJS)
		$(AR) $@ $^

$(OBJS): $(PATH_OBJS)/%.o: %.c
		mkdir -p $(PATH_OBJS)
		$(CC) $(CFLAGS) -c $^ -o $@ $(INCLUDES)

test: $(NAME)
		$(MAKE) -sC $(TEST_FOLDER)
		echo -n "\n<--------TESTS-------->\n\n"
#		valgrind --leak-check=full --show-leak-kinds=all ./$(RUN_TESTS) a faire si prblm leaks
		./$(RUN_TESTS)

clean:
		$(RM) -r $(PATH_OBJS)
		$(MAKE) -C $(TEST_FOLDER) clean

fclean: clean
		$(RM) $(NAME)
		$(MAKE) -C $(TEST_FOLDER) fclean

re: fclean
		$(MAKE)

.PHONY:
.SILENT: test
