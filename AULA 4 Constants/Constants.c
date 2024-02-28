#include <stdio.h>

int main() {
    const int myNum = 15; // A const never changes the value 

    // myNum = 10; // gives error

    printf("%d\n", myNum);

    const int minutesPerHour;
    // minutesPerHour = 60; // error 
}
