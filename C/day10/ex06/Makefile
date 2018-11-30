TARGET = do-op

CFLAGS = -c

OBJECTS = ft_putnbr.o ft_atoi.o main.o

all: $(TARGET)

 $(TARGET): $(OBJECTS)
	gcc $(OBJECTS) -o $(TARGET)

 ft_putnbr.o: srcs/ft_putnbr.c
	gcc $(CFLAGS) srcs/ft_putnbr.c

 ft_atoi.o: srcs/ft_atoi.c
	gcc $(CFLAGS) srcs/ft_atoi.c

 main.o: main.c
	gcc $(CFLAGS) main.c

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(TARGET)

.PHONY: all clean fclean
