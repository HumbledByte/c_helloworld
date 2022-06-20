#include <stdio.h>
#include <cs50.h>

// Understandig char * and pointer addresses and pointer arithmetic

int main(void)
{
    char *s = "HI!";
    printf("%s\n", s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);

    printf("%c\n", *s);
    printf("%c\n", *(s + 1));
    printf("%c\n", *(s + 2));
    printf("%c\n", *(s + 3));
}