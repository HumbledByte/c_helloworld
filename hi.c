#include <stdio.h>
#include <cs50.h>

// implicitly typecasting on line 12
/*
int main(void)
{
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';

    printf("%i %i %i\n", c1, c2, c3);
}
*/


// indexing a string


int main(void)
{
    string s = "HI!";
    printf("%i %i %i\n", s[0], s[1], s[2]);
}