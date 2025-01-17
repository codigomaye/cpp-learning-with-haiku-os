#include <stdio.h>
#include <math.h>

double hypotenuse(int a, int b)
{
    return sqrt((a*a) + (b*b));
}

int main(void)
{
    int a = 3;
    int b = 4;

    printf("For the triangle with legs %d and %d, the hyponetuse will be %g\n", a, b, hypotenuse(a, b));

    return 0;
}