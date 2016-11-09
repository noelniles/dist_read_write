CC = gcc -std=c11
CFLAGS = -Wall -Werror -Wextra -Wpedantic
OBJS = main.o
APP = drw

all: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(APP)

main.o: main.c
	$(CC) $(CFLAGS) -c main.c
