#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 16; n++)
		if (n < 10)
		{
			putchar (n + '0');
		}
		else
		{
			putchar ('A' + (n - 10));
		}
	putchar ('\n');
	return (0);
}

