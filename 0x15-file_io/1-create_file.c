#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, strlen = 0;

	if (!filename)
		return (-1);
	if (!text_content)
	{
		for (strlen = 0; text_content[strlen];)
			strlen++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	/*file is created, given read and write permission and truncated*/
	w = write(fd, text_content, strlen);
	/*text content is not NULL, uses write text content to the file*/

	if (fd == -1 || w == -1)
		return (-1);
	/*if file can not be created or write fails it returns -1*/
	close(fd);
	return (1);
}
