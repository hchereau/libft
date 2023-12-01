NAME = run_tes

### SRCS

PATH_SRCS = srcs/

SRCS += ft_isalpha.test.c

vpath %.c $(PATH_SRCS)

### HEADER

INCLUDES_LIBFT += ../includes/
INCLUDES_LIBFT_TEST += includes/
INCLUDES += -I $(INCLUDES_LIBFT_TEST)
INCLUDES += -I $(INCLUDES_LIBFT)

HEADERS += $(INCLUDES_LIBFT_TEST)/libft.test.h
HEADERS += $(INCLUDES_LIBFT)/fdf.h

### OBJS

PATH_OBJS = objs/

OBJS = $(patsubst %.c, $(PATH_OBJS)/%.o, $(SRCS))

### OBJS_TEST

PATH_OBJS_TEST = ../objs/

OBJS_TEST = $(wildcard $(PATH_OBJS_TEST)/*.o)
OBJS_TEST :=

### COMPILATION

CC = clang

CFLAGS += -Werror
CFLAGS += -Wextra
CFLAGS += -Wall

### RULE

all: $(NAME)

NAME:
