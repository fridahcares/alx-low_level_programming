#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <elf.h>

void close_elf(int elf);
/**
 * main - displays information contained in ELf header
 * @argc: argument count
 * @argv: pointer to the arguments
 * Return: 0 on success
 *
 * Description: If the file is not an ELF File or the function
 * fails, exit code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	free(header);
	close_elf(o);
	return (0);
}
