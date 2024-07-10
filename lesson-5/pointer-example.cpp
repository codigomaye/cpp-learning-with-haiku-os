#include <stdio.h>

int main(void)
{
    int myInt = 5;

    // Declare a pointer that we know doesn't point to a valid memory address.
    int *uselessPointer = NULL;

    // Set the value of this pointer to the memory address that myInt stores
    // is value in. Without the * in the front of its name, it would be considered
    // a regular variable and this would generat a compiler error. The
    // ampersand (&) in fron of myInt gets the address of myInt.
    
    // Note that space in wetween the * and the name of the pointer is OK.
    int *intPointer = &myInt;

    // %p prints the address of a pointer. This changes from execution of
    // the program to another.
    printf("intPointer's address is %p and contains the value %d\n", intPointer, *intPointer);

    return 0;
}