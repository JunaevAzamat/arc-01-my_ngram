#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <string.h>

void counting_characters(const char *argv[], int number_words, int n, int *argc)
{
    for (int i = 0; i < number_words; i++) 
    {
        const char *word = argv[i];
        for (size_t j = 0; j < strlen(word); j++)
        {
            int index_1 = 0;
            for (size_t k = j; k < j + n && word[k] != '\0'; k++)
            {
                index_1 = index_1 * 256 + tolower(word[k]);
            }
            argc[index_1]++;
        }
    }
    for (int i = 0; i < 256; i++)
    {
        if (argc[i] > 0)
        {
            printf("%c:%d\n", i, argc[i]);
            sleep(1);
        }
        else if (i == ' ')
        {
            printf("Space:%d\n", argc[i]);
            sleep(1);
        }
    }
}
int main(int argc, const char *argv[])
{
    if (argc < 2)
    {
        printf("Usage: %s <word or number>\n", argv[0]);
        return 1;
    }
    int *index_arr = calloc(256, sizeof(int));

    counting_characters(argv + 1, argc - 1, 1, index_arr);
    free(index_arr);
    return 0;
}
