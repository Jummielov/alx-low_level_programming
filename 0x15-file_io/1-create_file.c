#include "main.h"

/**
 * create_file -  function that creates a file.
 * @filename: the name of the file to create
 * @text_content:it is a terminated NULL string to write to the file
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int file_d, w, lent = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lent = 0; text_content[lent];)
			lent++;
	}

	file_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(file_d, text_content, lent);

	if (file_d == -1 || w == -1)
		return (-1);

	close(file_d);

	return (1);
}
