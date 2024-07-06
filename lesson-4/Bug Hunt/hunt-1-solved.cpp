// Solution: add an if condition to display only odd numbers

#include <stdio.h>

int main(void)
{
    // Print the times tables for the 2's family that has odd-numbered factors
    for (int i = 1; i < 13; i++)
        if (i % 2 > 0)
        {
            printf("2 x %d = %d \n", i, 2 * i);
            printf("The reminder is %d", i % 2);
        }
}