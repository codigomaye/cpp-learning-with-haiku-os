#include <math.h>
#include <stdio.h>

float Payment(float principal, float rate, int months)
{

    float top, bottom;

    top = principal * (rate / 12);
    bottom = 1 - pow(1 + (rate / 12), -months);

    return (top / bottom);
}

int main(void)
{
    float principal, rate;
    int months;

    principal = 20000.0;
    rate = .05;

    for (int months = 12; months <= 72; months += 12)
    {
        printf("The monthly payment for %d months, $%f car load as %f%% is $%f\n",
               months, principal, rate * 100, Payment(principal, rate, months));
    }

    return 0;
}