#include <stdio.h>

int main() {
    int myNumbers[] = {10, 15, 20, 25, 30};
    printf("%lu", sizeof(myNumbers)); // size in bytes
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
    printf("\n%d", length); // size of array

    // better loops for arrays

    for(int i = 0; i < length; i++) {
        printf("\n%d\n", myNumbers[i]);
    }


    return 0;
}