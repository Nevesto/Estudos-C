#include <stdio.h>

int main() {
    // each variable has a memory size:

    // int 2 or 4 bytes
    // float 4 bytes
    // double 8 bytes
    // char 1 byte

    // The memory size refers to how much space a type occupies in the computer's memory.

    // To actually get the size (in bytes) of a data type or variable, use the sizeof operator:

    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    /*
        Note that we use the %lu format specifer to print the result, instead of %d. 
        It is because the compiler expects the sizeof operator to return a long unsigned int (%lu), instead of int (%d). 
        On some computers it might work with %d, but it is safer to use %lu.
    */

    printf("int size: %lu\n", sizeof(myInt));
    printf("float size: %lu\n", sizeof(myFloat));
    printf("double size: %lu\n", sizeof(myDouble));
    printf("char size: %lu\n", sizeof(myChar));

    return 0;
}