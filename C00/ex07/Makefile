.PHONY = all clean

CC = gcc
CFLAGS = -W -Wall -Werror -Wextra 
TARGET = test 
OBJECTS = ft_putnbr.o main.o

all : $(TARGET)

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -rf *.o $(TARGET)
