#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int d, p;

	while (d <= 9)
	{
		p = 0;
		while (p <= 9)
		{
			if (d != p && d < p)
			{
				putchar (d + 48);
				putchar (p + 48);
				if (d + p != 17)
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
