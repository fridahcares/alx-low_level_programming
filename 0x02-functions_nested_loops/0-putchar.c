#include <stdio.h>
#include <unistd.h>
/**
 * main - program that prints putchar
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	write(1, "_putchar\n", 10);

	return (0);
}
