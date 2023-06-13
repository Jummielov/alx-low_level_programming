#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX std-output.
 * @filename: the file to open.
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t file_d;
	ssize_t t;
	ssize_t w;

	file_d = open(filename, O_RDONLY);

	if (file_d == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(file_d, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(file_d);
	return (w);
}
