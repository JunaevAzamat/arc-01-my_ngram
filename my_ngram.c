#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int counts[128] = {0};

    for (int i = 1; i < argc; i++)
    {
        char *str = argv[i];

        for (int j = 0; str[j] != '\0'; j++)
        {
            int index = (int)str[j];
            counts[index]++;
        }
    }
    for (int i = 0; i < 128; i++)
    {
        if (counts[i] != 0)
        {
            printf("%c:%d\n", i, counts[i]);
        }
    }

    return 0;
}
