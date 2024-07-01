// Include the required Header files.
#include<stdio.h>

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
#if 0
    // WITH a Temporary Variable.
    temp = NumOne;
    NumOne = NumTwo;
    NumTwo = temp;
#endif

#if 1
    // WITHOUT a Temporary Variable
    NumOne = NumOne + NumTwo;
    NumTwo = NumOne - NumTwo;
    NumOne = NumOne - NumTwo;
#endif

    // Print it all in one 'printf' command.
    printf("\n After Swapping : \n 1st Number = %d \n 2nd Number = %d \n", NumOne,NumTwo);
    
    return 0;
    //returns NOTHING.
}