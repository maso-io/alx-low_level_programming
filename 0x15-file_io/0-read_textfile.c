#include "main.h"
#include <string.h>
/**
 * read_textfile - reads textfile and print it to stdout
 * @filename: name of the file
 * @letters: number of letters to read
 *
 * Return: no. of letters read, or 0
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
	printf("\n\tread size: %lu\tletters: %lu\tstrlen(buffer): %ld\n", size, letters, strlen(buffer));
	close(fd);
	if (re_letters == EOF)
	{
		close(fd);
		free(buf);
		return (0);
	}
	for (count = 0; count < rd_letters; count++)
	{
		if (write(fd, &buffer[count], 1) == EOF)
		{
			close(fp);
			free(buffer);
			return (0);
		}
	}
	close(sp);
	free(buffer);
	/*
	while (--size > 0 && write(STDOUT_FILENO, buffer, 1) != 0 && *buffer++ !=
			EOF)
	{
		count++;
	}
	size = write(STDOUT_FILENO, buffer, size);
	write(STDOUT_FILENO, buffer, 1);*/
	printf("\n\tread size: %lu\tletters: %lu\tstrlen(buffer): %ld\n", size, letters, strlen(buffer));
	if (rd_letters != letters)
		return (0);

	return (rd_letters);
}
