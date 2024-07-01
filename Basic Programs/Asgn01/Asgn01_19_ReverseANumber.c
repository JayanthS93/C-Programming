#include<stdio.h>
int main ()
{
    int Num, NumTemp, Modulus, RevNum = 0;
    // Declare Local Variables to store values.

    printf("\n Enter the Number : \n");
    //Ask the User to enter a Number.
    scanf("%d", &Num);
    // Transfer the Number into a variable declared.

    NumTemp = Num;
    while(NumTemp % 10)
    {
        Modulus = NumTemp % 10;
        RevNum = (RevNum * 10) + Modulus;
        NumTemp = NumTemp / 10;

    }
    printf("The Reverse of %d is %d. \n", Num,RevNum);

    return 0;
}