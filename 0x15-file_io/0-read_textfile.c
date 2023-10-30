#include "main.h"
/**
 * read_textfile - reads textfile and print it to stdout
 * @filename: name of the file
 * @letters: number of letters to read
 *
 * Return: no. of letters read, or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t size;
	char *buffer;

	buffer = (char *)malloc(sizeof(char) * letters);
	fd = open(filename, O_RDONLY);
	if (!filename | !buffer | (fd == -1))
		return (0);
	size = read(fd, buffer, letters);
	if ((int)size < 0)
		return (0);
	size = write(STDOUT_FILENO, buffer, size);
	close(fd);
	if (size != letters)
		return (0);

	return ((ssize_t)size);
}
