#include <stdio.h>
#include <cs50.h>
#include <string.h>

// Comparing strings using char * and the string compare function

int main(void)
{
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    if (strcmp(s,t) == 0)
    {
        printf("Same!\n");
    }
    else
    {
        printf("Different!\n");
    }
}