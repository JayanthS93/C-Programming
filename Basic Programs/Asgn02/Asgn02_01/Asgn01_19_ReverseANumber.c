#include<stdio.h>

int ReverseNumber(int Num)
{
    // Declare Local Variables to store values.
    int Modulus, RevNum = 0;
    while(Num % 10)
    {
        Modulus = Num % 10;
        RevNum = (RevNum * 10) + Modulus;
        Num = Num / 10;
    }

    // return the output.
    return RevNum;

}

int main ()
{
    int Num, NumTemp, Modulus, RevNum = 0;
    // Declare Local Variables to store values.

    printf("\n Enter the Number : \n");
    //Ask the User to enter a Number.
    scanf("%d", &Num);
    // Transfer the Number into a variable declared.

    // Reverse the given number.
    RevNum = ReverseNumber(Num);
    // Print the output.
    printf("The Reverse of %d is %d. \n", Num,RevNum);

    return 0;
}