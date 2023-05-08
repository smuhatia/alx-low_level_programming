#include "main.h"
/**
 * create_file - This is a function that creates a file
 * @text_content: name of the file to copy 
 * @filename: this is the file to be created
 *
 * Return: 1 if it is success and -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int fd, nwritten, length = 0;

	if (!filename)
		return (-1);
	fd = open(filename,O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	nwritten = write(fd, text_content, length);
	if (nwritten == -1)
		return (-1);

	close(fd);
	return (1);
}
