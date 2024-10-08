NAME = libft.a

CC = gcc

SOURCE = ft_strlcpy.c ft_....

OBJECTS = $(SOURCE:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rc $(NAME) $(OBJECTS)
	

$(OBJECTS): %.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:

fclean:

re:

PHONY: all clean fclean re
