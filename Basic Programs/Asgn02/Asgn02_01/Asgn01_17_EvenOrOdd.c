#include<stdio.h>

void EvenOrOdd(int Num)
{
    // Declare local variable.
    char Modulus;

    // Check if num is Even or Odd.
    Modulus = Num % 2;

    if (Modulus == 0)
    {
        printf("The Number %d is Even Number. \n", Num);
    }
    else
    {
        printf("The Number %d is Odd Number. \n", Num);
    }

}
int main ()
{
    // Declare Local Variables to store values.
    int Num, Modulus; // Since modulus can not have floats as operands.

    //Ask the User to enter a Number.
    printf("\n Enter the Number : \n");
    scanf("%d", &Num);

    // Check if the num is Even or Odd.
    EvenOrOdd(Num);

    // returns zero.
    return 0;
}