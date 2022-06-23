#include <stdio.h>
#include <cs50.h>

// Understandig char * and pointer addresses and pointer arithmetic

int main(void)
{
    char *s = "HI!";
    int numbers[] = {0, 2, 4, 6, 8, 10, 12};

    printf("%s\n", s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);

// printing out characters in a string using pointer arithmetic and the dereference operator

    printf("%c\n", *s);
    printf("%c\n", *(s + 1));
    printf("%c\n", *(s + 2));
    printf("%c\n", *(s + 3));

// printing out integers using pointer arithmetic and the deference operater


    printf("%i\n", *numbers);
    printf("%i\n", *(numbers + 1));
    printf("%i\n", *(numbers + 2));
    printf("%i\n", *(numbers + 3));
    printf("%i\n", *(numbers + 4));
    printf("%i\n", *(numbers + 5));
    printf("%i\n", *(numbers + 6));

}