#ifndef _FILE_MAIN_
#define	_FILE_MAIN_

/* malloc */
#include <stdlib.h>
/* write */
#include <unistd.h>
/* oflags */
#include <fcntl.h>
/* FILE definition */
#include <stdio.h>

/* reads a text-file and prints it to stdout */
ssize_t read_textfile(const char *filename, size_t letters);
/* creates a function that creates a file */
int create_file(const char *filename, char *text_content);
/* function that appends text at the end of a file */
int append_to_file(const char *filename, char *text_content);
/* copies the contents of a file to another file */
/* usage: cp file_from file_to */

#endif /* end file-main */
