.PHONY = all clean

CC = gcc
CFLAGS = -W -Wall -Werror -Wextra 
TARGET = test 
OBJECTS = ft_rev_int_tab.o main.o

all : $(TARGET)

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -rf *.o $(TARGET)
