#include<stdio.h>
int main ()
{
    int year, Modulus;
    // Declare Local Variables to store values.

    printf("\n Enter the Year : \n");
    //Ask the User to enter a Number.
    scanf("%d", &year);
    // Transfer the Number into a variable declared.

    Modulus = year % 4;

    if (Modulus == 0)
    {
        printf("The Year %d is a Leap Year. \n", year);
    }
    else
    {
        printf("The Number %d is NOT a Leap Year. \n", year);
    }

    return 0;
}