#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @n: number of elements of the array
 * @a: an array of integers
 * Return: array of integers in reverse
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
