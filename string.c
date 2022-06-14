#include <stdio.h>
#include <cs50.h>
#include <string.h>

// Iterating over every character in a string using a for loop

int main(void)
{
    string s = get_string("Input: ");
    printf("Output: ");
    for (int i = 0; int n = strlen(s); i < n; i++)
    {
        printf("%c", s[i]);
    }
}