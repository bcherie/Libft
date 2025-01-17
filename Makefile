LIBSRC = ft_memset.c ft_memcpy.c ft_memccpy.c ft_memchr.c ft_strlen.c ft_memmove.c ft_memcmp.c ft_bzero.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_tolower.c ft_toupper.c ft_strncmp.c ft_strrchr.c ft_strdup.c ft_atoi.c ft_strnstr.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_putnbr_fd.c ft_putchar_fd.c ft_itoa.c ft_strmapi.c ft_putstr_fd.c ft_putendl_fd.c ft_split.c

NAME = libft.a

CC = gcc

LIBOBJS	= ${LIBSRC:.c=.o}

CFLAGS	= -Wall -Werror -Wextra

libft/%.o: libft/%.c
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: $(NAME)

$(NAME): $(LIBOBJS)
		ar rc $(NAME) $(LIBOBJS)
		ranlib $(NAME)

clean:
		rm -f *.o
fclean: clean
		rm -f $(NAME)

re: fclean all
