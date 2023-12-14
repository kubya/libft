LIBRARY	= libft
OUTN	= $(LIBRARY).a

CC		= gcc
FLAGS	= -Wall -Wextra -Werror

SRC		= ft_isalnum \
			ft_isalpha \
			ft_isascii \
			ft_isdigit \
			ft_isprint \
			ft_strlen \
			ft_memset \
			ft_bzero \
			ft_memcpy \
			ft_memmove \
			ft_strlcpy \
			ft_strlcat \
			ft_tolower \
			ft_toupper \
			ft_strchr \
			ft_strrchr \
			ft_strncmp \
			ft_memchr \
			ft_memcmp \
			ft_strnstr \
			ft_atoi \
			ft_calloc \
			ft_strdup \
			ft_substr \
			ft_strjoin \
			ft_strtrim \
			ft_split \
			ft_itoa \
			ft_strmapi \
			ft_striteri \
			ft_putchar_fd \
			ft_putstr_fd \
			ft_putendl_fd \
			ft_putnbr_fd \

CSRC	= $(SRC:%=%.c)
OSRC	= $(SRC:%=%.o)
NAME	= $(OUTN)

$(NAME): 
		$(CC) $(FLAGS) -c $(CSRC) -I./ 
		ar -rc $(OUTN) $(OSRC)

all: $(NAME)

clean:
		rm -f $(NAME)
		rm -f $(OSRC)

fclean: clean
		rm -f $(NAME)

wclean:
		del $(NAME)
		del $(OSRC)

re: fclean all

.PHONY: all, clean, fclean, re, wclean