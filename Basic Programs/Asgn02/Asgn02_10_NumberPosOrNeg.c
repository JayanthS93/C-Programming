// Check if Number given is Positive or Negative.

#include <stdio.h>

char CheckPosNeg(int* NumPtr)
{
    int Number = *NumPtr;

    if(Number > 0)
    {
        return 'p';
    }
    else if(Number < 0)
    {
        return 'n';
    }
    else{
        return 'z';
    }

}

void main()
{
    // Declare local variables.
    int Number; char result;
    // Ask User his Text.
    printf("\n Enter a Number: \n");
    scanf("%d", &Number);

    result = CheckPosNeg(&Number);

    if(result == 'p')
    {
        printf("\n Entered Number: %d is a POSITIVE. \n", Number);
    }
    else if(result == 'n')
    {
        printf("\n Entered Number: %d is a NEGATIVE. \n", Number);
    }
    else{
        printf("\n Entered Number: %d is ZERO. \n", Number);
    }

}