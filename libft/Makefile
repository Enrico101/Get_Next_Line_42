
CC = gcc

FLAG = -Wall -Wextra -Werror

NAME = libft.a

SOURCE = ft_strsplit.c ft_countwords.c ft_countlen.c ft_putnbr_fd.c ft_itoa.c ft_putnbr.c ft_putendl_fd.c ft_strtrim.c ft_putendl.c ft_strjoin.c ft_strsub.c ft_strmapi.c ft_strmap.c ft_striteri.c ft_striter.c ft_strclr.c ft_strdel.c ft_strnew.c ft_memdel.c ft_memalloc.c ft_putstr_fd.c ft_strnequ.c ft_strequ.c ft_putchar_fd.c ft_memmove.c ft_strdup.c ft_atoi.c ft_strncmp.c ft_strnstr.c ft_memcmp.c ft_memchr.c ft_memccpy.c ft_memcpy.c ft_bzero.c ft_strstr.c ft_strrchr.c ft_strcmp.c ft_strchr.c ft_strlcat.c ft_strncat.c ft_strcat.c ft_strncpy.c ft_strcpy.c ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_putstr.c ft_memset.c ft_putchar.c

all: $(NAME)

OBJ = $(SOURCE:.c=.o)

norm:
	norminette -R CheckForbiddenSourceHeader

run:
	$(CC) $(FLAG) $(SOURCE) -o test
	./test

$(NAME):
	gcc $(FLAG) -c $(SOURCE)
	ar rc $(NAME) $(OBJ) libft.h
	ranlib $(NAME)

test: all
	gcc $(flag) test.c

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
