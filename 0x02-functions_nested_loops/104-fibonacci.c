#include <stdio.h>
/**
 * main - prints the first Fibonacci numbers
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

	for (i = 1; i <= 98; i++)
	{
		printf("%ld", a);
		c = a + b;
		a = b;
		b = c;
		if (i != 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
