.PHONY = all clean

CC = gcc
CFLAGS = -W -Wall -Werror -Wextra 
TARGET = test 
OBJECTS = ft_ultimate_ft.o main.o

all : $(TARGET)

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -rf *.o $(TARGET)
