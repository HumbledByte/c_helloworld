#include <stdio.h>
#include <cs50.h>

// Learning arrays

/*
int main(void)
{
    int scores[3];

    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 74;
    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}
*/



// Using for loops with arrays

int main(void)
{
    int n = get_int("How many scores do you have?: ");
    int scores[n];

    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("score?: ");
    }

    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}