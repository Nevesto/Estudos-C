//If you assign a new value to an existing variable, it will overwrite the previous value

#include <stdio.h>

int main() {
    int myNum = 15; // value is 15
    myNum = 10; // now value is 10

    printf("%d\n", myNum);



    int number = 12;
    int otherNumber = 102;

    // Assign the value of number (12) to otherNumber (102)

    number = otherNumber;

    printf("%d\n", number); // number is 102 now
    return 0;
}