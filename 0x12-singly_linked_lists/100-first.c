#include <stdio.h>

void first(void) __attribute__((constructor));

/**
 * first - function that prints the required message
 */
void first(void)
{
	printf("You're bea;t! an;d yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
