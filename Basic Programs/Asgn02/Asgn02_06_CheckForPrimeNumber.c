#include<stdio.h>

// Function has two integers as its arguments.
int checkforprimenum(int num, int limit)
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
	int num, limit, prime;

	// Ask for calculating the limit.
	printf("\n Enter the Number \n");
	scanf("%d", &num);

	// Input must be positive and less than 10000(or your choice).
	if (num > 0 || num < 10000) 	
	{
		// Input Validity after the condition is fulfilled.
		printf("The Input is VALID. \n");

		// The limit till which the number's divisibility is valid.
		limit = num - 1;
		printf("The Limit of the Number's divisibility is till %d \n", limit);

		// Send the number and the limit as arguments to the function.
		prime = checkforprimenum(num,limit);
		printf("The Number of divisiblities failed is  %d \n", prime);

		// Check if the number was divisible as many times as its limit.
		if (prime == limit){
		printf("The Number is a Prime Number. \n");
		}
		else{
		printf("The Number is NOT a Prime Number. \n");
		}

    }
	else
	{
		printf("The Input is INVALID. \n");
	}

return 0;
}
