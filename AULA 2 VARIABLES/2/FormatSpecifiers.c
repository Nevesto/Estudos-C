/*
Format specifiers are used together with the printf() function to tell the compiler what type of data the variable is storing. It is basically a placeholder for the variable value.

A format specifier starts with a percentage sign %, followed by a character.

For example, to output the value of an int variable, use the format specifier %d surrounded by double quotes (""), inside the printf() function.

To print types,use %d for numbemr, %c for char and %f for float.
*/

#include <stdio.h>

int main() {
    // declaring variables
    int myNum = 18;
    float myFloat = 3.43;
    char myLetter = 'D'; 

    printf("%d\n", myNum);
    printf("%f\n", myFloat);
    printf("%c\n", myLetter);
    printf("The letter is %c and my number is %d", myLetter, myNum);
    return 0;
}
