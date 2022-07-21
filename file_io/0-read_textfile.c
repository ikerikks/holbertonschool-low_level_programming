#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile -  reads a text file and prints it
 * @filename: nameof file
 * @letters: number of letters
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

   	int file;
	int rd;
	int  wr;
	char *ptr;

   	file = open(filename, O_RDONLY);

	if (file == (-1))
		return (0);

	ptr = malloc(sizeof(char) * letters);

	if (ptr == NULL)
		return (0);

	rd = read(file, ptr, letters);
	wr = write(STDOUT_FILENO, ptr, rd);

	close(file);

	free(ptr);

	return (wr);

}
