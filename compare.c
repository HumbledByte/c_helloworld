#include <stdio.h>
#include <cs50.h>
#include <string.h>

// Understanding how string compare works if we compare them by the addresses

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