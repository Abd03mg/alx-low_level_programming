#include "main.h"

/**
 * read_textfile - function that reads a text and print it to stdout.
 *
 * @filename: file name.
 * @letters: count of letters must be readen.
 * Return: count of readed letters or 0 if not.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, ret;
	char *tex;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	tex = malloc(sizeof(char) * letters);
	if (!tex)
		return (0);
	ret = read(fd, tex, letters);
	if (ret < 0)
	{
		free(tex);
		return (0);
	}
	close(fd);
	if (!(write(1, tex, ret)))
	{
		free(tex);
		return (0);
	}
	free(tex);
	return (ret);
}
