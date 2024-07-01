// Include the required Header files.
#include<stdio.h>

void SwapNumbers(int NumOne, int NumTwo)
{
    // Declare a third variable.
    int temp;

    // WITH a Temporary Variable.
    temp = NumOne;
    NumOne = NumTwo;
    NumTwo = temp;

    // Print it all in one 'printf' command.
    printf("\n Using a Third Variable:");
    printf("\n After Swapping : \n 1st Number = %d \n 2nd Number = %d \n", NumOne,NumTwo);
    
}

void SwapNumbersWithoutThirdVariable(int NumOne, int NumTwo)
{
    // WITHOUT a Temporary Variable
    NumOne = NumOne + NumTwo;
    NumTwo = NumOne - NumTwo;
    NumOne = NumOne - NumTwo;

    // Print it all in one 'printf' command.
    printf("\n Without Using a Third Variable:");
    printf("\n After Swapping : \n 1st Number = %d \n 2nd Number = %d \n", NumOne,NumTwo);
    
}

int main ()
{
    int NumOne, NumTwo, temp;
    // Declare Local Variables to store values.

    printf("\n Enter the First Number : \n");
    //Ask the User to enter a Number.
    scanf("%d", &NumOne);
    // Transfer the Number into a variable declared.

    printf("\n Enter the Second Number : \n");
    //Ask the User to enter a Number.
    scanf("%d", &NumTwo);
    // Transfer the Number into a variable declared.

    // Print it all in one 'printf' command.
    printf("\n Before Swapping : \n 1st Number = %d \n 2nd Number = %d \n", NumOne,NumTwo);
    
    // Swapping the Numbers.
    SwapNumbers(NumOne,NumTwo); // With a third variable
    SwapNumbersWithoutThirdVariable(NumOne,NumTwo); // Without a third variable.

    //returns NOTHING.
    return 0;
}