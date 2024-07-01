// Include the required Header files.
#include<stdio.h>

float PerimeterOfRectangle(float length, float breadth)
{
    // Declare a local variable.
    float perimeter;

    // Calculate the Area & Circumference.
    perimeter = 2*(length + breadth);
    
    // Return the Perimeter.
    return perimeter;
}

float AreaOfRectangle(float length, float breadth)
{
    // Declare a local variable.
    float area;

    // Calculate the Area & Circumference.
    area = length*breadth;
    
    // Return the Area.
    return area;
}

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
    area = PerimeterOfRectangle(length,breadth);
    perimeter = AreaOfRectangle(length,breadth);

    // Print the Area and Circumference.
    printf("\n The Area is : %f \n The Perimeter is : %f \n",area,perimeter);

    return 0; // Returns Nothing.
}