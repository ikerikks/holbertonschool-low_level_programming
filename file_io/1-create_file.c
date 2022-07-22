#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: nameof file
 * @letters: number of letters
 *
 * Return: 1 on success, -1 on failure 
 */

int create_file(const char *filename, char *text_content)
{

	int file;
	int wr;
	int letters;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content == NULL)
	{
		for (letters = 0; text_content[letters]; letters++)
			;

		wr = write(file, text_content, letters);

		if (wr == -1)
			return (-1);
	}
	
	close(file);

	return(1);

}
