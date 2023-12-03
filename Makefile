NAME = libft.a

### SRCS

PATH_SRCS = srcs/

SRCS += ft_isalpha.c

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
		$(AR) $@ $<

$(OBJS): $(PATH_OBJS)/%.o: %.c
		mkdir -p $(PATH_OBJS)
		$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)

test: $(NAME)
		$(MAKE) -sC $(TEST_FOLDER)
		echo -n "\n<--------TESTS-------->\n\n"
#		valgrind --leak-check=full --show-leak-kinds=all ./$(RUN_TESTS) a faire si prblm leaks
		./$(RUN_TESTS)

clean:
		$(RM) -r $(PATH_OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean
		$(MAKE)

.PHONY: all test clean fclean re
.SILENT: test
