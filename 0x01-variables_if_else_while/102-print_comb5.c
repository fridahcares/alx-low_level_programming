#include <stdio.h>
/**
 * main - prints all possible combinations of two two digit numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int d = 0, p;

	while (d <= 99)
	{
		p = d;
		while (p <= 99)
		{
			if (p != d)
			{
			putchar((d / 10) + '0');
			putchar((d % 10) + '0');
			putchar(' ');
			putchar((p / 10) + '0');
			putchar((p % 10) + '0');

			if (d != 98 || p != 99)
			{
				putchar(',');
				putchar(' ');
			}
			}
			++p;
		}
		++d;
	}
	putchar('\n');
	return (0);
}
