#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned long int i;
	unsigned long int a;
	unsigned long int b;
	unsigned long int c;

	a = 1;
	b = 2;

	for (i = 1; i <= 50; i++)
	{
		printf("%ld", a);
		c = a + b;
		a = b;
		b = c;
		printf(", ");
	}
	printf("\n");
	return (0);
}
