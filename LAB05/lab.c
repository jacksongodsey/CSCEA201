#include "stdio.h"

int is_prime(int prime);

int primes_in_range(int prime, int range);

int main()
{
	printf("Prime numbers between 10 and 20\n");
    primes_in_range(10, 20);

	printf("Prime numbers between 100 and 200\n");
    primes_in_range(100, 200);

	printf("Prime numbers between 1000 and 1050\n");
    primes_in_range(1000, 1050);


	return 0;
}

int is_prime(int prime) {
    int isDivisible;
		isDivisible = 0;
		for (int j = 2; j < prime / 2; j++)
		{
			if (prime % j == 0)
			{
				isDivisible = 1;
				break;
			}
		}
    return isDivisible;
}


int primes_in_range(int lowerbound, int upperbound) {
    int output;

    for (lowerbound = lowerbound; lowerbound <= upperbound; lowerbound++) {
         output = is_prime(lowerbound);
         if (output == 0) {
             printf("%d\n", lowerbound);
         }
    }
    return 0;
}
