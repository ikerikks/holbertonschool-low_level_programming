#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: nameof file
 * @text_content: content of the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{

	int file;
	int letters;
	int wr;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
		text_content = "";

	file = open(filename, O_CREAT | O_TRUNC | O_WRONLY | O_APPEND, 600);

	if (text_content != NULL)
	{
		for (letters = 0; text_content[letters]; letters++)
			;

		wr = write(file, text_content, letters);
		if (wr == (-1))
			return (-1);

	}

	close(file);

	return (1);

}
