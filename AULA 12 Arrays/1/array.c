#include <stdio.h>

int main() {
    int myNumbers[] = {10, 15, 35, 50};
    printf("%d", myNumbers[0]);
    myNumbers[0] = 20;
    printf("\n%d", myNumbers[0]);
    
    for(int i = 0; i < 4; i++) {
        printf("\n%d", myNumbers[i]);
    }
    
    
    
    return 0;
}