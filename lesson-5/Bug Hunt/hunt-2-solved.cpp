// Problem: Altough it compiles, the problem is that there are more 3 integer format specifiers in printf, while there are only 2 integer specified.
// Solution: Add `c` variable as an argument in printf
// My GCC version: gcc version 11.4.0 (Ubuntu 11.4.0-1ubuntu1~22.04)

#include <stdio.h>

int main(void)
{
    int a;
    int b, c;

    a = 1;
    b = 2;
    c = 3;

    printf("a is %d, b is %d, and c is %d.\n", a, b, c);

    return a + b + c;
}