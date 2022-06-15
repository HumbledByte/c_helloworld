#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Using string compare, exit statuses and arrays

int main(void)
{
    string names[] = {"Carter", "David"};
    string numbers[] = {"+1-617-495-1000", "+1-949-468-2750"};

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(names[i], "Mario") == 0 )
        {
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("No numbers found!\n");
    return 1;
}