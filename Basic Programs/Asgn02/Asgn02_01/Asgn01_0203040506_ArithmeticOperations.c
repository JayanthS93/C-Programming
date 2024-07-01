// Include the required Header files.
#include <stdio.h>

int AddTwoNumbers(int NumOne, int NumTwo)
{
    // Declare local variable.
    int sum;

    // Add the two numbers.
    sum = NumOne + NumTwo;

    // return the output.
    return sum;
}

int SubtractTwoNumbers(int NumOne, int NumTwo)
{
    // Declare local variable.
    int diff;

    // Subtract the two numbers.
    diff = NumOne - NumTwo;

    // return the output.
    return diff;
}

int MultiplyTwoNumbers(int NumOne, int NumTwo)
{
    // Declare local variable.
    int mul;

    // Multiply the two numbers.
    mul = NumOne * NumTwo;

    // return the output.
    return mul;
}

float DivideTwoNumbers(int NumOne, int NumTwo)
{
    // Declare local variable.
    float div;

    // Divide the two numbers after typecasting it as float.
    div = (float)NumOne / (float)NumTwo;
    
    // return the output.
    return div;
}

int main ()
{
    int NumOne, NumTwo, sum, diff, mul;
    float div;
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

    // Add those Numbers
    sum = AddTwoNumbers(NumOne,NumTwo);
    printf(" Sum of %d and %d = %d \n", NumOne,NumTwo,sum);

    // Subtract those Numbers
    diff = SubtractTwoNumbers(NumOne,NumTwo);
    printf(" Difference of %d and %d = %d \n", NumOne,NumTwo,diff);

    // Multiply those Numbers
    mul = MultiplyTwoNumbers(NumOne,NumTwo);
    printf(" Product of %d and %d = %d \n", NumOne,NumTwo,mul);

    // Divide those Numbers
    div = DivideTwoNumbers(NumOne,NumTwo);
    printf(" Quotient of %d and %d = %f \n", NumOne,NumTwo,div);

    // or Print it all in one 'printf' command.
    printf("\n Sum = %d \n Difference = %d \n Product = %d \n Quotient = %f \n", sum, diff, mul, div);
    
    return 0;
    //returns NOTHING.
}