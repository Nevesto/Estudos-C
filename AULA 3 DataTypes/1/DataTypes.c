#include <stdio.h>

// all variables in C must be a specified data type, and you must use a format specifier inside the printf() function to disoplay it:

int main() {
    // Creating variables
    
    int myNum = 5; // Integer (whole number)
    float myFloat = 5.99; // Floating point number
    char MyLetter = 'G'; // Character

    printf("%d\n", myNum);
    printf("%f\n", myFloat);
    printf("%c\n", MyLetter);

    return 0;
}