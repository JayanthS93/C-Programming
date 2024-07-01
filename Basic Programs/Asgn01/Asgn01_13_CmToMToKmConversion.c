// Include the required Header files.
#include<stdio.h>

int main ()
{
    float cm, m, km;

    // Ask the User to enter a Centimeter.
    // Transfer the Number into a variable declared.
    printf("\n Enter the Centimeter : \n");
    scanf("%f", &cm);

    // Calculate the Kilometer & Meter.
    m = 0.01 * cm;
    km = 0.00001 * cm;

    // Print the Meter and Kilometer.
    printf("\n The Meter is : %f \n The Kilometer is : %f \n", m,km);

    return 0; // Returns Nothing.
}