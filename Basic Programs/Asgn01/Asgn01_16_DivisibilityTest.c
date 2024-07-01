#include<stdio.h>
int main ()
{
    int NumOne, DivNum, Modulus;
    // Declare Local Variables to store values.

    printf("\n Enter the Number : \n");
    //Ask the User to enter a Number.
    scanf("%d", &NumOne);
    // Transfer the Number into a variable declared.

    printf("\n Enter the (Divisibilty) Number : \n");
    //Ask the User to enter a Number.
    scanf("%d", &DivNum);
    // Transfer the Number into a variable declared.

    Modulus = NumOne % DivNum;

    if (Modulus == 0)
    {
        printf("The Number %d is divisible by %d \n", NumOne,DivNum);
    }
    else
    {
        printf("The Number %d is NOT divisible by %d \n", NumOne,DivNum);
    }


    return 0;
}