#include "main.h"

/**
 * create_file - function that creates a fiel.
 *
 * @filename: name of file.
 * @text_content: text must be appended to file.
 * Return: 1 if success.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i;

	if (!filename || !text_content)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd < 0)
		return (-1);
	for (i = 0; text_content[i]; i++)
		;
	if (!(write(fd, text_content, i)))
		return (-1);
	close(fd);
	return (1);
}
