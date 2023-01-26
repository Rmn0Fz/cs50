#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Declare variable
    int i, j;
    int height;

    // Set condition that prompt in the given range 1-8
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Rows
    for (i = 1; i <= height; i++)
    {
        // Left staricase
        for (j = 1; j <= height - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("#");
        }
        // Space between staircase
        printf("  ");
        
        // Right staircase
        for (j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}