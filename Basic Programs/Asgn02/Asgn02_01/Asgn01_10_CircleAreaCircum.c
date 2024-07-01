// Include the required Header files.
#include<stdio.h>

float CircumferenceOfCircle(int radius)
{
        // Declare a local variable.
    float circumference;

    // Calculate the Circumference.
    circumference = 2*(22.0/7.0)*radius;
    
    // Return the Circumference.
    return circumference;
}

float AreaOfCircle(int radius)
{
    // Declare a local variable.
    float area;

    // Calculate the Area.
    area = (22.0/7.0)*radius*radius;
    
    // Return the Area.
    return area;
}

int main ()
{
    float radius, area, circumference;

    // Ask the User to enter a Radius.
    // Transfer the Number into a variable declared.
    printf("\n Enter the Radius : \n");
    scanf("%f", &radius);

    // Print the Area and Circumference.
    area = AreaOfCircle(radius);
    circumference = CircumferenceOfCircle(radius);
    printf("\n The Area is : %f \n The Circumference is : %f \n",area,circumference);

    return 0; // Returns Nothing.
}