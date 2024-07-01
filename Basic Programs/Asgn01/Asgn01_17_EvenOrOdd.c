#include<stdio.h>
int main ()
{
    int Num, Modulus;
    // Declare Local Variables to store values.

    printf("\n Enter the Number : \n");
    //Ask the User to enter a Number.
    scanf("%d", &Num);
    // Transfer the Number into a variable declared.

    Modulus = Num % 2;

    if (Modulus == 0)
    {
        printf("The Number %d is Even Number. \n", Num);
    }
    else
    {
        printf("The Number %d is Odd Number. \n", Num);
    }

    return 0;
}