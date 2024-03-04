#include <stdio.h>

int main() {
    int a = 10;
    int b = 12;
    int c = 15;

    if(a > b) {
        printf("A > B");
    } else if (b > c) {
        printf("B > C");
    } else {
        printf("C > A, B");
    }
}