SRCS		= ft_isdigit.c\
		ft_memmove.c\
		ft_strchr.c\
		ft_strncmp.c\
		ft_atoi.c\
		ft_isprint.c\
		ft_memset.c\
		ft_strdup.c\
		ft_strnstr.c\
		ft_bzero.c\
		ft_itoa.c\
		ft_putchar_fd.c\
		ft_strjoin.c\
		ft_strrchr.c\
		ft_calloc.c\
		ft_memccpy.c\
		ft_putendl_fd.c\
		ft_strlcat.c\
		ft_strtrim.c\
		ft_isalnum.c\
		ft_memchr.c\
		ft_putnbr_fd.c\
		ft_strlcpy.c\
		ft_substr.c\
		ft_isalpha.c\
		ft_memcmp.c\
		ft_putstr_fd.c\
		ft_strlen.c\
		ft_tolower.c\
		ft_isascii.c\
		ft_memcpy.c\
		ft_split.c\
		ft_strmapi.c\
		ft_toupper.c

OBJ		= $(SRCS:.c=.o)
NAME		= libft.a
CC		= gcc
RUN_SRC		= -c
INCL		= -include
HEADER		= libft.h
LIB		= ar -rcs
RM		= rm -f
CFLAGS		= -Wall -Wextra -Werror
.c.o:
		@$(CC) $(RUN_SRC) $(CFLAGS) $(SRCS) $(INCL) $(HEADER)
$(NAME):	$(OBJ)
		@$(LIB) $(NAME) $(OBJ)
all:		$(NAME)
clean:
		@$(RM) $(OBJ)
fclean:		clean
		@$(RM) $(NAME)
re:		fclean all
.PHONY:		all clean fclean re
