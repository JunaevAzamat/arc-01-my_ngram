# Makefile for my_ngram program

TARGET = my_ngram
SRC = my_ngram.c
OBJ = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(TARGET)

$(TARGET): $(OBJ)
    $(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

$(OBJ): $(SRC)
    $(CC) $(CFLAGS) -c $(SRC)

clean:
    rm -f $(OBJ)

fclean: clean
    rm -f $(TARGET)

re: fclean all
