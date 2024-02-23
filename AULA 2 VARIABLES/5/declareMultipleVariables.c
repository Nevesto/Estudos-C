// To declare more than one variable of the same type, use a comma-separated list

#include <stdio.h>

int main() {
    int x = 5, y= 6, z = 7;
    printf("%d\n", x + y + z);
    printf("%d, %d, %d\n", x, y, z);

    // assign the same value to multiple variables of the same type:
    
    printf("-------------\n");
    int a, b, c;
    a = b = c = 43;
    printf("%d\n", a + b + c);
    printf("%d, %d, %d", a, b, c);

    return 0;
}