/*
The problem in this code are the followings:
- The header containing sqrt definition is not included.
    - Solution: Include `<math.h> header.

NOTE: When compiling with gcc, remember the compiler to link Math library. Else, use g++
Although, instead of using sqrt and x^2, wouldn't be easier to use an absolute value function?
*/

#include <stdio.h>
#include <math.h>

double distance(int x1, int y1, int x2, int y2)
{
    int deltax = x2 - x1;
    int deltay = y2 - y1;

    // return sqrt((deltax * deltax) + (deltay * deltay));
    return abs(deltax + deltay);
}

int main(void)
{
    int x1, y1, x2, y2;

    x1 = 3;
    y1 = 3;

    x2 = 8;
    y2 = 3;

    printf("The distance between (%d, %d) and (%d, %d) is %g \n", x1, y1, x2, y2, distance(x1, y1, x2, y2));

    return 0;
}
