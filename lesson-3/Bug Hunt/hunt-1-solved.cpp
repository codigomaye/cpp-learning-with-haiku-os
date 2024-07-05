/*
The problem in this code are the followings:
- The header containing Printf is not included.
    - Solution: Include `<stdio.h> header.
- main(): the variable `c` is not included
    - Solution: Declare and initialize `c`variable.
*/

#include <stdio.h>

int sum(int first, int second, int third)
{
    return first + second + third;
}

int main(void)
{
    int a = 3;
    int b = 4;
    int c = 1;

    printf("The sum is %d\n", sum(a,b,c));
    return 0;
}