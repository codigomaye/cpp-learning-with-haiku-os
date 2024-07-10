// Problem: The index in for loop is not incrementing. That's why there is an infinite loop
// Solution: Add a postincrement operator to `i` index.

#include <stdio.h>
int main(void)
{
    int number = 0;
    for (int i = 1; i < 10; i++)
    {
        number += i;
        printf("At steps %d, the number is now %d\n", i, number);
    }
}