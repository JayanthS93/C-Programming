// Printing Seasons using Macros

#include <stdio.h>

// Defining MACROS
#define SEASON1     "SUMMER"
#define SEASON2     "WINTER"
#define SEASON3     "SPRING"
#define SEASON4     "RAINY"

void main()
{
    // Declare Variables
    int seasons;
    printf("\n Enter a Number between 1 to 4: \n");
    scanf("%d", &seasons);
    printf("\n You chose: %d.\n", seasons);

    switch(seasons)
    {
        case 1:
        printf("\n Season is: %s.\n", SEASON1);
        break;
        case 2:
        printf("\n Season is: %s.\n", SEASON2);
        break;
        case 3:
        printf("\n Season is: %s.\n", SEASON3);
        break;
        case 4:
        printf("\n Season is: %s.\n", SEASON4);
        break;
        default:
        printf("\n INVALID INPUT.\n");
        break;
    }
}
