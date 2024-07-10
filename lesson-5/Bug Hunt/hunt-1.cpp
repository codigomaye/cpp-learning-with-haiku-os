#include <stdio.h>
int main(void)
{
    int number = 0;
    for (int i = 1; i < 10; i)
    {
        number += i;
        printf("At steps %d, the number is now %d\n", i, number);
    }
}