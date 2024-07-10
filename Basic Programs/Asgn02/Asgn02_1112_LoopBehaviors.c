// For and While Loop Behaviors.

#include <stdio.h>

void ForLoopBehavior(int* ptr, int* NumPtr)
{
    // Variables declared.
    int i = *ptr, num = *NumPtr;
    // First Loop behavior
    for(i = 0; i < 2; i++)
    {
        num++;
        printf("\n Iteration : %d \n", num);
        printf(" Location : %p \n", NumPtr);
    }
    // Second Loop behavior
    for(i = 0; i < 2; ++i)
    {
        ++num;
        printf("\n Iteration : %d \n", num);
        printf(" Location : %p \n", NumPtr);
    }
    // Third Loop behavior
    for(i = 0; i < 2; i+1)
    {
        num++;
        printf("\n Iteration : %d \n", num);
        printf(" Location : %p \n", NumPtr);
    }


}

void WhileLoopBehavior(int* ptr, int* NumPtr)
{
    // Variables declared.
    int i = *ptr, num = *NumPtr;
    // First Loop behavior
    while(1)
    {
        num++;
        printf("\n Iteration : %d \n", num);
        printf(" Location : %p \n", NumPtr);
    }
    // Second Loop behavior
    while(2)
    {
        ++num;
        printf("\n Iteration : %d \n", num);
        printf(" Location : %p \n", NumPtr);
    }


}

void main()
{
    // Declare Variables.
    int i, num = 0;

    // For Loop Behaviors
    ForLoopBehavior(&i, &num);

    // While Loop Behavior
    WhileLoopBehavior(&i, &num);

}