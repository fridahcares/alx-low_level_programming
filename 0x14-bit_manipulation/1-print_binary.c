#include "main.h"
#include <stdio.h>
/**
 * print_binary - function that prints the binary representation of a number
 * @n: integer to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int j, count = 0;
	unsigned long int current;

	for (j = 63; j >= 0; j++)
	{
		current = n >> 1;

		if (current & 1)
		{
			printf("1");
			count++;
		}
		else if (count)
			printf("0");
	}
	if (!count)
		printf("0");
}
