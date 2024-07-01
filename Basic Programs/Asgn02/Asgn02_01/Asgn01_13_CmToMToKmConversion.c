// Include the required Header files.
#include<stdio.h>

float CMtoM(float cm)
{
    // Declare local variable
    float meters;

    // Calculate the Meter.
    meters = 0.01 * cm;

    // return meters
    return meters;

}

float CMtoKM(float cm)
{
    // Declare local variable
    float km;

    // Calculate the Kilometers.
    km = 0.00001 * cm;

    // return kilometers
    return km;

}

int main ()
{
    float cm, meters, km;

    // Ask the User to enter a Centimeter.
    // Transfer the Number into a variable declared.
    printf("\n Enter the Centimeter : \n");
    scanf("%f", &cm);

    // Calculate the Kilometer & Meter.
    meters = CMtoM(cm);
    km = CMtoKM(cm);

    // Print the Meter and Kilometer.
    printf("\n The Meter is : %f \n The Kilometer is : %f \n", meters,km);

    return 0; // Returns Nothing.
}