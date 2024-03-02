#include <stdio.h>

void countCharacters(const char* str) {
    int count[127] = {0}; 

   
    for (int i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++; 
    }

  
    for (int i = 0; i < 127; i++) {
        if (count[i] > 0) {
            printf("%c:%d\n", (char)i, count[i]); 
        }
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("Usage: %s text [text2, text3]\n", argv[0]);
        return 1;
    }

   
    for (int i = 1; i < argc; i++) {
        countCharacters(argv[i]); 
    }

    return 0;
}
