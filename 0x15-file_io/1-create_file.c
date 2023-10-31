#include "main.h"

/**
 * slen - string length
 * @s: string
 *
 * Return: length
 */

int slen(char *s)
{
	if (!*s)
		return (0);
	s++;
	return (1 + slen(s));
}

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
	int chars, fd;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";
	fd = open(filename, O_CREAT | O_EXCL | O_WRONLY, S_IRUSR | S_IWUSR);
	if (fd < 0)
	{
		if (errno == EEXIST)
		{
			fd = open(filename, O_WRONLY | O_TRUNC);
			if (fd == EOF)
				return (-1);
		}
		else
			return (-1);
	}
	chars = write(fd, text_content, slen(text_content));
	if ((chars == EOF) | (chars != slen(text_content)))
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
