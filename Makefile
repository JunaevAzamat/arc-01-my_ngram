CC = gcc
CFLAGS = -Wall -Wextra -Werror
SOURCE = my_ngram.c
TARGET = my_ngram

$(TARGET) : $(SOURCE)
	@$(CC) $(CFLAGS) -o $@ $<

.PHONY: fclean

fclean:
	@rm -rf $(TARGET)
