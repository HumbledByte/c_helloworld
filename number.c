#include <cs50.h>
#include <stdio.h>

//Creating an array of numbers using curly braces

//Linear search algorithm

int main(void)
{
    int numbers[] = {4, 6, 8, 2, 7, 5, 0};

    for (int i = 0; i< 7; i++)
    {
        if (numbers[i] == 9)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}