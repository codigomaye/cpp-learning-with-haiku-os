#include <stdio.h>

int main(void)
{
    int a = 1;
    int b = 2;

    // The result here will be 3 because we add 1 to a
    // after a + b is calculated
    printf("a++ + b = %d\n", a++ + b);

    // Because we added 1 to a, this prints a 4;
    printf("a + b = %d\n", a + b);

    // This is 5 because the compiler will add 1 to a before calculating
    // a + b
    printf("++a + b = %d\n", ++a + b);

    return 0;
}