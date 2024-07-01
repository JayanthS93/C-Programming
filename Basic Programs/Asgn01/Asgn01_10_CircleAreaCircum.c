// Include the required Header files.
#include<stdio.h>

int main ()
{
    float radius, area, circumference;

    // Ask the User to enter a Radius.
    // Transfer the Number into a variable declared.
    printf("\n Enter the Radius : \n");
    scanf("%f", &radius);

    // Calculate the Area & Circumference.
    area = (22/7)*radius*radius;
    circumference = 2*(22/7)*radius;

    // Print the Area and Circumference.
    printf("\n The Area is : %f \n The Circumference is : %f \n",area,circumference);

    return 0; // Returns Nothing.
}