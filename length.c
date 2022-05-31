#include <stdio.h>
#include <cs50.h>

// Iterating through a string and getting a lenght of the string manually

/*
int main(void)
{   
    string name = get_string("Name: ");

    int i = 0;

    while (name[i] != '\0')
    {
        i++;
    }
    
    printf("%i\n", i);
}
*/
int get_length(string s);

int main(void)
{
    string name = get_string("Name: ");
    int length = get_length(name);
    printf("%i\n", length);


}


int get_length(string s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        i++;
    }
    
    return i;
}