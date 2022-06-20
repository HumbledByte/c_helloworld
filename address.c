#include <stdio.h>

// Understanding how pointers work


// 1st way to print an address
int main(void)
/*
{
    int n = 50;
    int *p = &n;
    printf("%p\n", p);
}
*/

//How to print out what is at a specific address

{
    int n = 50;
    int *p = &n;
    printf("%p\n", p);
    printf("%i\n", n);
    //dereference operator - allows yout to see the value stored in the address
    printf("%i\n", *p);

}

