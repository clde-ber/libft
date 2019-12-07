SRCS		= ft_isdigit.c ft_memmove.c ft_strchr.c ft_strncmp.c ft_atoi.c \
		ft_isprint.c ft_memset.c ft_strdup.c ft_strnstr.c ft_bzero.c ft_itoa.c \
		ft_putchar_fd.c ft_strjoin.c ft_strrchr.c ft_calloc.c ft_memccpy.c ft_putendl_fd.c \
		ft_strlcat.c ft_strtrim.c ft_isalnum.c ft_memchr.c ft_putnbr_fd.c ft_strlcpy.c \
		ft_substr.c ft_isalpha.c ft_memcmp.c ft_putstr_fd.c ft_strlen.c ft_tolower.c \
		ft_isascii.c ft_memcpy.c ft_split.c ft_strmapi.c ft_toupper.c

OBJ		= $(SRCS:.c=.o)

NAME		= libft.a

CC		= gcc

OUTPUT		= -c

TO_FILE		= -o

HEADERS		= libft.h

LIB		= ar -rcs

RM		= rm -rf

CFLAGS		= -Wall -Wextra #-Werror

all:
	make $(NAME)

$(NAME): $(OBJ)
	@$(LIB) $(NAME) $(OBJ)

clean:
			@$(RM) $(OBJ)

%.o : %.c
	$(CC) $(CFLAGS) -I$(HEADERS) -o $@ -c $<

fclean:
	@make clean
	@$(RM) $(NAME)

re:
	make fclean
	make all

.PHONY:
			all clean fclean re
