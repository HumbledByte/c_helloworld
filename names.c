#include <cs50.h>
#include <stdio.h>
#include <string.h>

// using strcmp function and using exit statuses

int main(void)
{
    string names[] = {"Bill", "Charlie", "Fred", "George", "Ginny", "Percy", "Ron"};
    for (int i = 0; i < 7; i++)
    {
        if (strcmp(names[i], "Georgie") == 0)
        {
            printf("Found: \n");
            return 0;
        }
    }
    printf("Not Found!\n");
    return 1; 
}
