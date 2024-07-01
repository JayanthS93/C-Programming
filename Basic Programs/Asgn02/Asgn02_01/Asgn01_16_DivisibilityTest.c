#include<stdio.h>

void DivisibilityTest(int Num, int DivNum)
{
    // Declare local variable.
    char Modulus;

    // Check for the divisibility with the given number.
    Modulus = Num % DivNum;

    if (Modulus == 0)
    {
        printf("The Number %d is divisible by %d \n", Num,DivNum);
    }
    else
    {
        printf("The Number %d is NOT divisible by %d \n", Num,DivNum);
    }

}


int main ()
{
    // Declare Local Variables to store values.
    int Num, DivNum; // Since modulus can not have floats as operands.

    //Ask the User to enter a Number.
    printf("\n Enter the Number : \n");
    scanf("%d", &Num);

    //Ask the User to enter a Number.
    printf("\n Enter the (Divisibilty) Number : \n");
    scanf("%d", &DivNum);

    // Check for the divisibility.
    DivisibilityTest(Num, DivNum);

    // return zero.
    return 0;
}