#include<stdio.h>

void LeapYear(int year)
{
    // Declare local variables
    char Modulus;

    // Check if the year is a Leap year.
    Modulus = year % 4;

    if (Modulus == 0)
    {
        printf("The Year %d is a Leap Year. \n", year);
    }
    else
    {
        printf("The Number %d is NOT a Leap Year. \n", year);
    }

}

int main ()
{
    int year, Modulus;
    // Declare Local Variables to store values.

    //Ask the User to enter a Number.
    printf("\n Enter the Year : \n");
    scanf("%d", &year);

    // Check if the year is a leap year
    LeapYear(year);

    return 0;
}