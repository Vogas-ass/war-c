CC = gcc
CFLAGS = -Wall -Wextra -g

SRC = src/main.c src/territorio.c src/ataque.c src/missoes.c src/utils.c
OBJ = $(SRC:.c=.o)

all: war

war: $(OBJ)
	$(CC) $(CFLAGS) -o war $(OBJ)

clean:
	rm -f src/*.o war
