#include <stdio.h>

int main() {

    // The character must be surrounded by single quotes, like 'A' or 'c', and we use the %c format specifier to print it:

    char myGrade = 'A';
    printf("%c\n", myGrade);

    // Alternatively, if you are familiar with ASCII, you can use ASCII values to display certain characters. Note that these values are not surrounded by quotes (''), as they are numbers:

    char a = 65, b = 66, c = 67;

    printf("Using ascii table\n");
    printf("%c\n", a);
    printf("%c\n", b);
    printf("%c\n", c);
    
    return 0;
}
