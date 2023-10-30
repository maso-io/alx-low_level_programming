#include "main.h"
/* calculates the length of a buffer */
int _strlen(char *buffer);
/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: NULL terminated string to write to file
 *
 * Return: 1 on success, -1 on failure.
 * Description: The file must have USR RW permissions only if it doesn't exist,
 * and keep it's old permissions if it exists.Truncate the file if it already
 * exists.
 */
int create_file(const char *filename, char *text_content)
{
	int size, fd;

	if (!filename)
		return (-1);
	size = _strlen(text_content);
	fd = open(filename, O_WRONLY | O_TRUNC);
	if (fd)
	{
		/* opened file that was existing successfully and kept permission */
		if (write(fd, text_content, size) != size)
		{
			close(fd);
			return (-1);
		}
	}
	else
	{
		/* didn't open file */
		fd = open(filename, O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
		if (fd == -1)
		{
			close(fd);
			return (-1);
		}
		write(fd, text_content, size);
	}
	close(fd);
	return (1);
}
/**
 * _strlen - calculates the length of null terminated string
 * @buffer: string
 *
 * Return: length, 0 if null
 */
int _strlen(char *buffer)
{
	int i;

	if (!buffer)
		return (0);
	i = 0;
	while (buffer[i] != '\0')
		i++;
	return (i);
}
