#include <stdio.h>

int main(void)
{
    for(char i= 65; i < 91; i++)
    {
        printf("%c", i);
    }

    char endline = '\n';

    printf("%c", endline);

    return 0;
}