#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * check_num - check - string there are digit
 * @str: array str
 *
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	int i;

	i = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
		{
			return (1);
		}
	}
	return (0);
}
/**
 * main - program that adds two numbers
 * @argv: array of arguments
 * @argc: number of command line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (check_num(argv[i]) != 0)
		{
			printf("Error\n");
			return (1);
		}
		num = atoi(argv[i]);

		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
