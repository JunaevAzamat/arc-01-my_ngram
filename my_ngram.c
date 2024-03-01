#include <stdio.h>
#include <stdlib.h>
#define MAX_ARRAY_SIZE 128

void my_future_plans(int *Muhammad_1, char *Muhammad_2)
{
    int Yusuf_1 = 0;
    while (Muhammad_2[Yusuf_1] != '\0')
    {
        if (Muhammad_2[Yusuf_1] != '"')
        {
            Muhammad_1[(int)Muhammad_2[Yusuf_1]]++;
        }
        Yusuf_1++;
    }
}

void my_future_job(int *iphone, int samsung)
{
    int weight = 0;
    while (weight < samsung)
    {
        if (iphone[weight] > 0)
        {
            printf("%c:%i\n", weight, iphone[weight]);
        }
        weight++;
    }
}

int main(int redmi, char **honor)
{
    int papper = 1, array[MAX_ARRAY_SIZE] = {0};
    while (papper < redmi)
    {
        my_future_plans(&array[0], honor[papper]);
        papper++;
    }
    my_future_job(&array[0], 128);
    return EXIT_SUCCESS;
}
