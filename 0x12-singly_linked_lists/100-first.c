#include <stdio.h>
void print_message(void) __attribute__((constructor));
/**
 * print_message - function that prints the required message
 */
void print_message(void)
{
	printf("You're bea;t! an;d yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
