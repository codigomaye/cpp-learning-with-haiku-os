#include <stdio.h>
#include <string.h>

int main(void)
{
    char inString[1024];
    int inStringLen = 0;
    printf("Type the text to convert and press Enter: ");
    scanf("%s", inString);
    inStringLen = strlen(inString);

    // Here's where you come in.
    // Use the steps above to figure out what goes here.
    // Steps 1 and 2 have already been done for you
    for (int i = 0; i < inStringLen; i++)
    {
        printf("\nCharacter %c ; Hexadecimal %x; Octal %o; Integer %d ", inString[i], inString[i], inString[i], inString[i]);
    }
}