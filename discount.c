#include <cs50.h>
#include <stdio.h>

// understanding args and return

float discount(float price, int percent);

int main (void)
{
    float regular = get_float("What is the price of the item? ");
    int percent_off = get_int("What is the percent off? ");
    float sale = discount(regular, percent_off);
    printf("The final price is %.2f", sale);
}

float discount(float price, int percent)
{
    return price * (100 - percent) / 100;
}