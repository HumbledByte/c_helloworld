#include <stdio.h>

// While lopp

/*
int main()
{
   int i = 0;
   while (i <= 3)
   {
       printf("meow\n");
       i++;
   }
   
}

*/

// For loop and prototypes

/*
void meow();

int main(void)
{
    for(int i = 0; i < 3; i++)
    {
        meow();
    }
}

void meow(void)
{
    printf("meow\n");
}
*/


// modularizing my code

void meow(int n);

int main(void)
{
    meow(3);
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
    
}