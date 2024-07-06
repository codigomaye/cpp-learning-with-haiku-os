#include <stdio.h>

int main(void)
{
    // Print the times tables for the 2's family that has odd-numbered factors
    for (int i = 1; i < 13; i++)
        printf("2 x %d = %d \n", i, 2 * i);
}