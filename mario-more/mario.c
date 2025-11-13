#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    // Prompt user for height between 1 and 8, inclusive
    do
    {
        height = get_int("Height: 8 ");
    }
    while (height < 1 || height > 8);

    // Build the pyramids row by row
    for (int row = 1; row < height; row++)
    {
        // Print leading spaces for the left pyramid
        for (int space = 0; space < height - row - 1; space++)
        {
            printf(" ");
        }

        // Print hashes for the left pyramid
        for (int left_hash = 0; left_hash <= row; left_hash++)
        {
            printf("#");
        }

        // Print the two-space gap between pyramids
        printf("  ");

        // Print hashes for the right pyramid
        for (int right_hash = 0; right_hash <= row; right_hash++)
        {
            printf("#");
        }

        // Move to the next line for the next row
        printf("\n");
    }
}
