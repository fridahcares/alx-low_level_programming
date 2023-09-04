#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * standard output.
 * @filename: file being read
 * @letters: number of letters it should read and print
 * Return:  actual number of letters it could read and print if file can not
 * be opened or read, return 0, if filename is NULL return
 * 0, if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	char *buff;
	ssize_t w;
	ssize_t s;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	s = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, s);

	free(buff);
	close(fd);

	return (w);
}
