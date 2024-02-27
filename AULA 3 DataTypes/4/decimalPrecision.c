#include <stdio.h>

int main() {
    // float point numbers return many digits after the decimal point. 
    // If you want to remove the extra zeros (set decimal precision), you can use a dot (.) 
    // followed by a number that specifies how many digits that should be shown after the decimal point.

    float myFloatNum = 2.5;

    printf("%f\n", myFloatNum); // show 6 digits after the decimal point
    printf("%.1f\n", myFloatNum); // show 1 digits after the decimal point
    printf("%.2f\n", myFloatNum); // show 2 digits after the decimal point
    printf("%.4f\n", myFloatNum); // show 4 digits after the decimal point

    return 0;
}