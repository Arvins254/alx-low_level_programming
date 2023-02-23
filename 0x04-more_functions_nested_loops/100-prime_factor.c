#include <stdio.h>
void prime_num(void);
long int reduction(long int num, long int prime);
/**
 * prime_num - prints the largest prime numbers
 * Return: 0
 */

void prime_num(void)
{
	long int i;
	long int i;
	long int k = 1231952;
	int count = 0;

	for (i = 2; i < k + i; i++)
	{
		for (j = 2; j < k + 1; j++)
		{
			/* rintf("Dividing %ld by %ld\n\n", i, j);*/
			if (i % j == 0)
			{
				count++;
			}
		}
		if (!(count > 2))
		{
			printf("%ld is a prime number.\n\n", i);
			k = reduction(k, i);
		}
		count = 0;
	}
}
/**
 * reduction - Entry point
 * @num: an interger
 * @prime: prime number
 * Return: remaining value
 */
long int reduction(long int num, long int prime)
{
	long int remainder = num;

	if (num % prime == 0)
	{
		remainder = (num / prime);
		printf("%ld divided by %ld and reduced to %ld\n\n", num, prime);
		reduction(remainder, prime);
	}
	return (remainder);
}
/**
 * main - entry point
 * Return:  0.
 */
int main(void)
{
	prime_num();
	return (0);
}
