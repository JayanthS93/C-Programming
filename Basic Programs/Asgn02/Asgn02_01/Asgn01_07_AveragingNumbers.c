// Include the required Header files.
#include<stdio.h>

void AverageOfNumbers(int num1, int num2, int num3, int num4, int num5)
{
    // Declare a local Variable.
    int Avg, Num = 5;
    // Average all the numbers
    Avg = (num1 + num2 + num3 + num4 + num5)/ Num;
    // Print the Average.
    printf("\n The Average of %d, %d, %d, %d, %d is %d \n",num1,num2,num3,num4,num5,Avg);

}

int main ()
{
    int NumOne, NumTwo, NumThree, NumFour, NumFive;

    // Ask the User to enter a Number.
    // Transfer the Number into a variable declared.
    printf("\n Enter the first number : \n");
    scanf("%d", &NumOne);

    printf("\n Enter the second number : \n");
    scanf("%d", &NumTwo);

    printf("\n Enter the third number : \n");
    scanf("%d", &NumThree);

    printf("\n Enter the fourth number : \n");
    scanf("%d", &NumFour);

    printf("\n Enter the fifth number : \n");
    scanf("%d", &NumFive);

    // Average of the five numbers.
    AverageOfNumbers(NumOne, NumTwo, NumThree, NumFour, NumFive);

    return 0; // Returns Nothing.
}
