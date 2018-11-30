TARGET = libft.a

CFLAGS = -c -Wall -Wextra -Werror

HEADERS = includes/ft.h

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
        srcs/ft_strlen.c srcs/ft_swap.c

OBJECTS = ft_putchar.o ft_putstr.o ft_strcmp.o \
        ft_strlen.o ft_swap.o

all: $(TARGET)

 $(TARGET): $(SRCS)
	gcc $(CFLAGS) $(SRCS)
	ar -rc $(TARGET) $(OBJECTS)
	ranlib $(TARGET)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re
