#include <stdio.h>
/**
 * main - prints the sum of the even-valued terms
 *
 * Return: 0 Always successful
 */
int main(void)
{
	unsigned long int i;
	unsigned long int a;
	unsigned long int b;
	unsigned long int sum;

	a = 1;
	b = 2;
	sum = b;
	while (a + b < 4000000)
	{
	b += a;
	if (b % 2 == 0)
	(sum += b);
		a = b - a;
		++i;
	}
	printf("%ld\n", sum);
	return (0);
}
