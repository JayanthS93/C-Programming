// Include the required Header files.
#include <stdio.h>

int main ()
{
    int NumOne, NumTwo, sum, diff, mul, div;
    // Declare Local Variables to store values.

    printf("\n Enter the first number a = \n");
    //Ask the User to enter a Number.
    scanf("%d", &NumOne);
    // Transfer the Number into a variable declared.

    printf("\n Enter the second number b = \n");
    //Ask the User to enter a Number.
    scanf("%d", &NumTwo);
    // Transfer the Number into a variable declared.
    
    // Start Arithmetic Operations on those numbers.
    sum = NumOne + NumTwo;
    // Add those Numbers
    printf(" Sum of %d and %d = %d \n", NumOne,NumTwo,sum);
    // Print the sum here.
    diff = NumOne - NumTwo;
    // Subtract those Numbers
    printf(" Difference of %d and %d = %d \n", NumOne,NumTwo,diff);
    // Print the difference here.
    mul = NumOne * NumTwo;
    // Multiply those Numbers
    printf(" Product of %d and %d = %d \n", NumOne,NumTwo,mul);
    // Print the product here.
    div = NumOne / NumTwo;
    // Divide those Numbers
    printf(" Quotient of %d and %d = %d \n", NumOne,NumTwo,div);
    // Print the quotient here.

    // or Print it all in one 'printf' command.
    printf("\n Sum = %d \n Difference = %d \n Product = %d \n Quotient = %d \n", sum, diff, mul, div);
    
    return 0;
    //returns NOTHING.
}