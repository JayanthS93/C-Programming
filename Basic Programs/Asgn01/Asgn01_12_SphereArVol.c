// Include the required Header files.
#include<stdio.h>

int main ()
{
    float radius, volume, area;

    // Ask the User to enter a Radius.
    // Transfer the Number into a variable declared.
    printf("\n Enter the Radius : \n");
    scanf("%f", &radius);

    // Calculate the Area & Volume.
    area = 4*(22/7)*radius*radius;
    volume = (4/3)*(22/7)*radius*radius*radius;

    // Print the Area and Volume.
    printf("\n The Area is : %f \n The Volume is : %f \n",area,volume);

    return 0; // Returns Nothing.
}