#include<stdio.h>

void fibonacci(int limit);   // Function Prototype that takes int arguments and returns a void.

int main ()
{
    int lim;    // Local Variable declared. (Scope: Within the Main Function)

    printf("\n Enter the Limit of the Series \n");
    scanf("%d", &lim);  // The limit till which the Fibonacci Series must run is taken as input.

    fibonacci(lim);     // Function is called by 'call by value' method.
    
    return 0;   // Returns 0.
}

void fibonacci(int limit)    // Fibonacci Function starts and stores the value of 'lim' into 'limit'.
{
    int a = 0, b = 1, c;    // Local Variables declared and initialized. (Scope: Within the Fibonacci Function)

    printf("\n %d, %d", a,b);   // Fibonacci starts from 0,1 initially. Hence print them first.

    for (int i = 2; i < limit; i++)     // Variable 'i' is declared and initialized within the loop.
    {
        c = a + b;              // Since 0,1 are already printed we add them and get the sum.
        printf(", %d", c);    // Sum is printed.
        a = b;                  // The second number becomes the first number.
        b = c;                  // The sum becomes the second number and the loop goes on.
    }
    printf("\n");               // Make a line difference for the next command.
}