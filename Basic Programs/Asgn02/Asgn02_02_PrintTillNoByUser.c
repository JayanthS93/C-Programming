#include<stdio.h>

// Function Prototype that takes array of char arguments and returns a void.
void PrintNameTillUserNo(char *Text);
// Global Variable for User Text.
char UserText[20];

void main ()
{
    // Ask User his Text.
    printf("\n Enter your Text Here: \n");
    scanf("%99s", UserText);

    PrintNameTillUserNo(UserText);

}

void PrintNameTillUserNo(char *Text)
{
    char choice;

    while(1)
    {
        // Ask if he wants to print it or not?
        printf("\n Do you want to continue (y/n)?  \n");
        scanf("%s", &choice);

        printf("Your Choice is: %c \n", choice);

        if(choice == 'y')
        {
            printf("Your name is : %s \n", Text);
        }
        else if(choice == 'n')
        {
            break;
        }
        else{
            printf("INVALID INPUT \n");
        }

    }
}