#include <stdio.h>

#include <string.h>

int main(void)
{
    // To declare a string, you can declare a Char array
    char string[30];

    // Fill the string with 0's. While it might not seem intuitive to include
    // a "memory" function in string.h, it's often used for purposes like this.

    // memset: sets the value of all bytes in a block of memory to a particular value
    // usage: memset(anArray, valueToAssign, sizeOfTheArray);

    // This call sets everything in our array to 0
    memset(string, 0, 30);

    // Another way to set values of characters in a string: as an array. Here we
    // individually set the characters.A capital letter A has an integer value of 65.
    for(char i = 0; i < 26; i++)
    {
        string[i] = 65 + i;
    }

    printf("String contains: %s\n", string);

    // Yet *another* way to set a string's value. sprintf() -- "string printf" -- prints to a string instead of the screen, but
    // otherwise works the same as printf(). Just be careful that what is your printed isn't larger that the stringthat you're printing to. If it is,
    // you program will happily crash into bits.

    // usage sprintf(aStringVariable, formatString, argumentList)

    sprintf(string, "%f", 3.1415927);

    // %s is the place holder for a stringin printf():
    printf("String changed. Now it contains: %s\n", string);

    return 0;
}