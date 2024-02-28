#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define the_length_of_alphabet 256



int length_of_string(char* string){
    int i = 0;
    while(string[i])i++;
    return i;
}

int is_it_valid(int c) {
    return (c >= 0 && c < the_length_of_alphabet);
}

void the_writer_of_letter(int counter[]) { 
    for (int i = 0; i < the_length_of_alphabet; i++) {
        if (counter[i] > 0) {
            printf("%c: %d\n", i, counter[i]);
        }
    }
}

void the_counter_of_letter(int argc, char** argv) {
    int counter[the_length_of_alphabet] = {0};
    for (int i = 1; i < argc; i++) {
        int len = length_of_string(argv[i]);
        for (int k = 0; k < len; k++) {
            unsigned char c = argv[i][k];
            if (is_it_valid(c)) {
                counter[c]++;
            }
        }
    }
    the_writer_of_letter(counter); 
}

int main(int argc, char** argv) {
    the_counter_of_letter(argc, argv);
    return 0;
}
