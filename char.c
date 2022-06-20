#include <stdio.h>
#include <cs50.h>

// Understandig char * and pointer addresses

int main(void)
{
    char *s = "HI!";
    printf("%s\n", s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
}