#include <stdio.h>
#include <string.h>

void count_chars(const char *text) {
    int char_count[256] = {0};
    size_t text_length = strlen(text);

    for (size_t i = 0; i < text_length; i++) {
        char_count[(int)text[i]]++;
    }

    for (int i = 0; i < 256; i++) {
        if (char_count[i] > 0) {
            printf("%c:%d\n", (char)i, char_count[i]);
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s text [text2, text3]\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        count_chars(argv[i]);
    }

    return 0;
}