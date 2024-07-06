// Solution: change the format specifier from int ($d) to double/float (%f)
#include <stdio.h>

int main(void)
{
    float pi = 3.141592;
    printf("pi equals %f\n", pi);
    printf("2 * pi equals %f", pi * 2.0);
    return 0;
}