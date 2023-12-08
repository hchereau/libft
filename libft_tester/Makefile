NAME = run_test

### SRCS

PATH_SRCS = srcs/

SRCS += main.test.c
SRCS += utils.test.c
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
SRCS += ft_strnstr.test.c
SRCS += ft_atoi.test.c
SRCS += ft_calloc.test.c
SRCS += ft_strdup.test.c

vpath %.c $(PATH_SRCS)

### HEADER

INCLUDES_LIBFT += ../includes/
INCLUDES_LIBFT_TEST += includes/
INCLUDES += -I $(INCLUDES_LIBFT_TEST)
INCLUDES += -I $(INCLUDES_LIBFT)

HEADERS += $(INCLUDES_LIBFT)/libft.h
HEADERS += $(INCLUDES_LIBFT_TEST)/libft.test.h

### OBJS

PATH_OBJS = objs/

OBJS = $(patsubst %.c, $(PATH_OBJS)/%.o, $(SRCS))

### OBJS_TEST

# PATH_OBJS_TEST = ../objs/

# OBJS_TEST = $(wildcard $(PATH_OBJS_TEST)/*.o)
# OBJS_TEST := $(filter-out $(PATH_OBJS_TEST)/main.o, $(OBJS_TEST))

### LIB

PATH_LIB = -L../

LIB = ../libft.a

### COMPILATION

CC = clang

CFLAGS += -Werror
CFLAGS += -Wextra
CFLAGS += -Wall
CFLAGS += -fPIE

### RULE

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $^ $(LIB) -lbsd -o $@ $(INCLUDES)

$(OBJS): $(PATH_OBJS)/%.o: %.c
		mkdir -p $(PATH_OBJS)
		$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)

clean:
		$(RM) -r $(PATH_OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean
		$(MAKE)
.PHONY:

