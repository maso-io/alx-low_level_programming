#include "main.h"
#include <string.h>
/**
 * read_textfile - reads textfile and print it to stdout
 * @filename: name of the file
 * @letters: number of letters to read
 *
 * Return: the actual number of letters it could read and print, or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, count, rd_letters;
	char *buffer;

	if (!filename)
		return (0);
	buffer = (char *)malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == EOF)
	{
		free(buffer);
		return (0);
	}
	rd_letters = read(fd, buffer, letters);
	if (rd_letters == EOF)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	for (count = 0; count < rd_letters; count++)
	{
		if (write(STDOUT_FILENO, &buffer[count], 1) == EOF)
		{
			close(fd);
			free(buffer);
			return (0);
		}
	}
	close(fd);
	free(buffer);

	return (rd_letters);
}
