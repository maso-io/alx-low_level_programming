#include "main.h"
/* calculates the length of a string */
int slen(char *s);
/* copies content from fd_1 to fd_2 */
int copy(int fd_1, int fd_2);
/* open two files and returns their file descriptors */
int *open_files(char *argv[]);
/**
 * main - copies the contents of one file to another
 * @ac: argument count
 * @argv: argument vector
 * Return: 0 on success, 97 on argument size error,
 * if FILE_FROM does not exist/ cannot open 98
 * if you can't create/write to FILE_TO 99
 * if can't close fd 100
 */
int main(int ac, char *argv[])
{
	int ret;
	int *fds;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fds = open_files(argv);
	if (*fds != 98 || *fds != 99 || *fds != -1)
		ret = copy(fds[0], fds[1]);
	else
		ret = *fds;
	if (ret == 98)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
	if (ret == 99)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);

	if (close(fds[0]) == EOF)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fds[0]);
		exit(100);
	}
	if (close(fds[1]) == EOF)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fds[1]);
		exit(100);
	}
	free(fds);
	exit(ret);
}
/**
 * open_files - opens files given in a argument vector
 * @argv: argument vector
 *
 * Return: array of file descriptors
 */
int *open_files(char *argv[])
{
	int fd_f, fd_t, *fds;
	char *file_from;
	char *file_to;

	file_from = argv[1];
	file_to = argv[2];
	fd_f = open(file_from, O_RDONLY);
	fd_t = open(file_to, O_CREAT | O_EXCL | O_WRONLY, 0664);
	if (fd_f == EOF)
	{
		close(fd_f);
		close(fd_t);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", file_from);
		exit(98);
	}
	if (errno)
	{
		if (errno == EEXIST)
		{
			fd_t = open(file_to, O_WRONLY | O_TRUNC);
		}
		else
		{
			close(fd_f);
			close(fd_t);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	fds = (int *)malloc(sizeof(int) * 2);
	if (!fds)
		exit(-1);
	fds[0] = fd_f;
	fds[1] = fd_t;

	return (fds);
}
/**
 * copy - copies files from fd_1 to fd_2
 * @fd_1: fd for "file_from"
 * @fd_2: fd for "file_to"
 *
 * Return: 0 on success, otherwise 99 (can't write) or 98 (can't read)
 */
int copy(int fd_1, int fd_2)
{
	int size, rd;
	char *buffer;
	int fd_res;
	int flag_r, flag_w, end_flag;

	size = 1, flag_r = 1, flag_w = 1, end_flag = 1, rd = 0;
	buffer = (char *)malloc(sizeof(char) * (1024 * size));
	if (!buffer)
		exit(99);
	while (flag_r && flag_w && end_flag)
	{
		rd = read(fd_1, buffer, 1024);
		if (rd == EOF)
		{
			flag_r = 0;
			break;
		}
		if (write(fd_2, buffer, rd) == EOF)
		{
			flag_w = 0;
			break;
		}
		if (buffer[size - 1] == '\0')
		{
			end_flag = 0;
			break;
		}
		size++;
		buffer = realloc(buffer, sizeof(char) * (1024 * size));
		if (!buffer)
		{
			free(buffer);
			exit(99);
		}
	}
	if (!flag_r)
		fd_res = 98;
	else if (!flag_w)
		fd_res = 99;
	else
		fd_res = 0;

	free(buffer);
	return (fd_res);
}
/**
 * slen - calculates the length of a '\0' terminating string
 * @s: string
 *
 * Return: the number of characters of string
 */
int slen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + slen(++s));
}
