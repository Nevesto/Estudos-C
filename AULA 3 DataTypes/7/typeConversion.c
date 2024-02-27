#include <stdio.h>

/*
Sometimes, you have to convert the value of one data type to another type. This is known as type conversion.
For example, if you try to divide two integers, 5 by 2, you would expect the result to be 2.5. 
But since we are working with integers (and not floating-point values), the following example will just output 2:
*/

int main() {
    int x = 5;
    int y = 2;

    printf("incorrect sum: %d\n\n", x/y); // output = 2;



    // implicit conversion


    // Implicit conversion is done automatically by the compiler when you assign a value of one type to another.

    float myFloat = 9;
    printf("int conversion to float: %f\n\n", myFloat);

    // The same thing happens converting a float to a int:

    int myInt = 9.99;
    printf("Float conversion to int: %d\n\n", myInt);

    // As another example, if you divide two integers: 5 by 2, you know that the sum is 2.5. 
    // And as you know from the beginning of this page, if you store the sum as an integer, the result will only display the number 2. 
    // Therefore, it would be better to store the sum as a float or a double:

    float mySumFloat = x/y;
    printf("Float incorrect sum: %f\n\n", mySumFloat); // Why is the result 2.00000 and not 2.5? It is because 5 and 2 are still integers in the division. In this case, you need to manually convert the integer values to floating-point values. (see below).


    // Explicit Conversion


    // Explicit conversion is done manually by placing the type in parentheses () in front of the value.

    // Now the problem above can be resolved by:

    float correctSum = (float) 5/2;
    printf("Correct sum of 5 by 2: %f\n\n", correctSum);

    // and using the decimal precision we can do:

    printf("Correct sum of 5 by 2 using decimal precision: %.1f\n\n", correctSum);

    // A little real life example:

    int maxScore = 500;

    int userScore = 420;

    float percentage = (float) userScore / maxScore * 100.0;
    printf("User's percentage is: %.2f\n", percentage);

    return 0;
}