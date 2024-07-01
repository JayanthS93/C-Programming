// Include the required Header files.
#include<stdio.h>

float AreaOfSphere(float radius)
{
    // Declare a local variable.
    float area;

    // Calculate the Area.
    area = 4.0*(22.0/7.0)*radius*radius;
    
    // Return the Area.
    return area;
}

float VolumeOfSphere(float radius)
{
        // Declare a local variable.
    float volume;

    // Calculate the Volume.
    volume = (4.0/3.0)*(22.0/7.0)*radius*radius*radius;
    
    // Return the Volume.
    return volume;
}

int main ()
{
    float radius, volume, area;

    // Ask the User to enter a Radius.
    // Transfer the Number into a variable declared.
    printf("\n Enter the Radius : \n");
    scanf("%f", &radius);

    // Calculate the Area & Volume.
    area = AreaOfSphere(radius);
    volume = VolumeOfSphere(radius);

    // Print the Area and Volume.
    printf("\n The Area is : %f \n The Volume is : %f \n",area,volume);

    return 0; // Returns Nothing.
}