// Include the required Header files.
#include<stdio.h>

int main ()
{
    float length, breadth, area, perimeter;

    // Ask the User to enter a Length and Breadth.
    // Transfer the Number into a variable declared.
    printf("\n Enter the Length : \n");
    scanf("%f", &length);

    printf("\n Enter the Breadth : \n");
    scanf("%f", &breadth);

    // Calculate the Area & Perimeter.
    area = length*breadth;
    perimeter = 2*(length + breadth);

    // Print the Area and Circumference.
    printf("\n The Area is : %f \n The Perimeter is : %f \n",area,perimeter);

    return 0; // Returns Nothing.
}