#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Using string compare, exit statuses and arrays

typedef struct 
{
    string name;
    string number;
}
person;


int main(void)
{
    person people[2];
    people[0].name = "Carter";
    people[0].number = "773-123-4567";

    people[1].name = "David";
    people[1].number = "773-456-7891";

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, "Carter") == 0 )
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("No numbers found!\n");
    return 1;
}