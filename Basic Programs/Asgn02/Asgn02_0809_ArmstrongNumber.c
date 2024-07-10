// Armstrong Number Detector.

#include <stdio.h>
#include <math.h>

int NumberOfDigits(unsigned int* NumPtr)
{
    // Find the Number of Digits of the Number
    unsigned int Number = *NumPtr; int Num_of_digits = 0;

    while(Number != 0)
    {
        Number /= 10;
        Num_of_digits++;
    }

    return Num_of_digits;
}

char CheckForArmstrong(unsigned int* NumPtr)
{
    unsigned int Number = *NumPtr; int No_of_digits = 0, sum = 0, mod = 0, num;

    // Find the Number of Digits of the Number
    No_of_digits = NumberOfDigits(&Number);
    printf("\n The Number %d consists of %d digits. \n", Number, No_of_digits);

    num = Number;
    while(num != 0)
    {
        mod = num % 10;
        sum += pow(mod, No_of_digits);  // pow() is from math.h
        num /= 10;
    }

    printf("\n The Number %d has Armstrong Sum of %d \n", Number, sum);
    if(sum == Number)
    {
        return 'y';
    }
    else{
            return 'n';
    }
}

void main()
{
    unsigned int Number = 0, choice; char Armstrong; int limit;

    while(1)
    {
        // Ask the User.
        printf("\n Choose 1 or 2: \n");
        printf("\n 1. Check for an Armstrong Number. \n");
        printf("\n 2. List of Armstrong Numbers. \n");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:     // Ask the User to enter any number.
            printf("\n Enter a Number to check if it is an Armstrong Number: \n");
            scanf("%d", &Number);

            Armstrong = CheckForArmstrong(&Number);

            if(Armstrong == 'y'){
                printf("\n The Number %d is an Armstrong Number. \n", Number);
            }
            else{
                printf("\n The Number %d is NOT an Armstrong Number. \n", Number);
            }
            break;
            
            case 2:     // Ask the User to enter any number.
            printf("\n Enter a Number to check if it is an Armstrong Number: \n");
            scanf("%d", &limit);

            for(int i = 0; i <= limit; i++)
            {
                Armstrong = CheckForArmstrong(&i);

                if(Armstrong == 'y'){
                    printf("\n The Number %d is an Armstrong Number. \n", i);
                }
                else{
                    printf("\n The Number %d is NOT an Armstrong Number. \n", i);
                }
            }
            break;

            default:
                printf("\n INVALID Input. \n");
            break;

        }

    }


}