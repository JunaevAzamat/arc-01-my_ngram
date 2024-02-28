CC = gcc
CFLAGS = -g -Wall -Wextra -Werror
SOURCE = my_ngram.c 
TARGET = my_ngram

$(TARGET):$(SOURCE)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f *.o

fclean: clean
	rm -f $(TARGET)

re: fclean all