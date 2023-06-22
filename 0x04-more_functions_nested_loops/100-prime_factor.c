#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number
 *
 * Return: 0
 */
int main(void)
{
	int long a, maxf;
	long number = 1231952;
	double square = sqrt(number);

	for (a = 1; a <= square; a++)
	{
		if (number % a == 0)
		{
			maxf = number / a;
			}
	}
	printf("%ld\n", maxf);
	return (0);
}

