#include <cs50.h>
#include <stdio.h>

// Using command line arguments, argc and argv

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        printf("Command Line needs 2 arguments. i.e  argv.c Mario");
    }
}
