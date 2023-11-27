#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Name of the file.
 * @text_content: String to append at the end of a file.
 * Return: 1 if the file exist, -1 if the file does not exist, or if you
 * don't have the required permissions to write to the file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, chars;

	if (!filename)
		return (-1);
	if (!text_content)
		return (1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == EOF)
		return (-1);
	for (chars = 0; text_content[chars] != '\0'; chars++)
	{
		if (write(fd, &text_content[chars], 1) == EOF)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
