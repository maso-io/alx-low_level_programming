#include <stdio.h>
#include <string.h>
/**
 * main - print environment variables
 * @argc: argment count
 * @argv: argument vector
 * @envp: environment variable
 *
 * Return: 0 always.
 */
int main(int argc, char *argv[], char *envp[])
{
	int i, len, fd;
	char *path;

	fd = open("variable.txt", O_WRONLY | O_CREAT);
	path = envp[21];
	len = strlen(envp[21]);
	for (i = 5; i < len; i++)
	{
		if (path[i] == ':')
		{
			i++;
			write(fd, '\n', 1);
			write(fd, &path[i], 1);
		}
		write(fd, &path[i], 1);
	}
	close(fd);

	return (0);
}
