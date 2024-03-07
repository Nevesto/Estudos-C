#include <stdio.h>

int main() {
    // The first dimension represents the number of rows [2], while the second dimension represents the number of columns [3]. The values are placed in row-order
    int matrix[2][3] = {
        {1, 4, 2,}, 
        {3, 6, 8}
        };

    // To access an element of a two-dimensional array, you must specify the index number of both the row and column.
    // This statement accesses the value of the element in the first row (0) and third column (2) of the matrix array.

    printf("%d\n", matrix[0][1]); // line 1 (0) and column 2 (1)

    // Loop 2D array

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d\n", matrix[i][j]);
        }
    }
}