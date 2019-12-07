SRCS		=./srcs/ft_isdigit.c\
		./srcs/ft_memmove.c\
		./srcs/ft_strchr.c\
		./srcs/ft_strncmp.c\
		./srcs/ft_atoi.c\
		./srcs/ft_isprint.c\
		./srcs/ft_memset.c\
		./srcs/ft_strdup.c\
		./srcs/ft_strnstr.c\
		./srcs/ft_bzero.c\
		./srcs/ft_itoa.c\
		./srcs/ft_putchar_fd.c\
		./srcs/ft_strjoin.c\
		./srcs/ft_strrchr.c\
		./srcs/ft_calloc.c\
		./srcs/ft_memccpy.c\
		./srcs/ft_putendl_fd.c\
		./srcs/ft_strlcat.c\
		./srcs/ft_strtrim.c\
		./srcs/ft_isalnum.c\
		./srcs/ft_memchr.c\
		./srcs/ft_putnbr_fd.c\
		./srcs/ft_strlcpy.c\
		./srcs/ft_substr.c\
		./srcs/ft_isalpha.c\
		./srcs/ft_memcmp.c\
		./srcs/ft_putstr_fd.c\
		./srcs/ft_strlen.c\
		./srcs/ft_tolower.c\
		./srcs/ft_isascii.c\
		./srcs/ft_memcpy.c\
		./srcs/ft_split.c\
		./srcs/ft_strmapi.c\
		./srcs/ft_toupper.c

OBJ		= $(SRCS:.c=.o)
NAME		= libft.a
CC		= gcc
RUN_SRC		= -c
CLASS_TARGET	= grep (./srcs/ \^ft_\) -a (./srcs/\.o$\) | mv ./objs/
INCL_HEADERS	= -include ./includes/libft.h
LIB		= ar rcs
RM		= rm -f
CFLAGS		= -Wall -Wextra -Werror
$(NAME):	$(INCL_HEADERS) $(OBJ)
		$(CC) $(INCL_HEADERS) $(CFLAGS) $(RUN SRC) $(SRCS)
		$(CLASS_TARGET)
		$(LIB) $(OBJ) $(NAME)
all:		$(NAME)

clean:		@$(RM) $(OBJ)

fclean:		clean
		@$(RM) $(NAME)
re:		fclean all

.PHONY:		all clean fclean re
