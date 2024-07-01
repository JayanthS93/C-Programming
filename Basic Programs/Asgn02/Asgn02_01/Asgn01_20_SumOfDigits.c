#include<stdio.h>

int SumOfDigits(int Num)
{
    // Declare local variables.
    int Modulus, Sum_Digits = 0;

    while(Num % 10)
    {
        Modulus = Num % 10;
        Sum_Digits = Sum_Digits + Modulus;
        Num = Num / 10;
    }

    // return the output.
    return Sum_Digits;

}

int main ()
{
    int Num, Sum_Digits = 0;
    // Declare Local Variables to store values.

    //Ask the User to enter a Number.
    printf("\n Enter the Number : \n");
    scanf("%d", &Num);

    // Sum of the Digits and print.
    Sum_Digits = SumOfDigits(Num);
    printf("The Sumof Digits of %d is %d. \n", Num, Sum_Digits);

    return 0;
}