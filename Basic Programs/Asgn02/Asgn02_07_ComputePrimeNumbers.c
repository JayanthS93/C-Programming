#include<stdio.h>

// Function has two integers as its arguments.
int computeprimenum(int num, int limit)
{
    int mod, i, counter = 0; // 'i' counts the number of divisibilities.
    for (i = 2; i < limit; i++)
    {	
        mod = num % i; // Modulus is to be calculated.
        if (mod == 0)
        {
			// if num is found divisible, then break.
           break;
		}
    }
return i; // Return the number of divisibilities.
}

int main ()
{
	// Local Variables declared.
	int num, limit, prime, LimitNum;

	// Ask for calculating the limit.
	printf("\n Enter the Limit of Numbers to find Primes within: \n");
	scanf("%d", &LimitNum);

	// Input must be positive.
	if(LimitNum > 0)
    {
        printf("The Prime Numbers till %d are: \n", LimitNum);

        while(LimitNum > 1) 	
        {
            // The limit till which the number's divisibility is valid.
            limit = LimitNum - 1;
            // Send the number and the limit as arguments to the function.
            prime = computeprimenum(LimitNum,limit);
            // Check if the number was divisible as many times as its limit.
            if (prime == limit)
            {
                printf("%d \n", LimitNum);
            }

            // Decrement the Limit Number
            LimitNum = LimitNum - 1;
        }

    }
	else
	{
		printf("The Input is INVALID. \n");
	}

return 0;
}
