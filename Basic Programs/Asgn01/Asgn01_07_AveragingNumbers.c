// Include the required Header files.
#include<stdio.h>

int main ()
{
    int Num = 5, NumOne, NumTwo, NumThree, NumFour, NumFive, Avg;

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

    // Average all the numbers
    Avg = (NumOne + NumTwo + NumThree + NumFour + NumFive)/ Num;
    // Print the Average.
    printf("\n The Average of %d, %d, %d, %d, %d is %d \n",NumOne,NumTwo,NumThree,NumFour,NumFive,Avg);

    return 0; // Returns Nothing.
}
