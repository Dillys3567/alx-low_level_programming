#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - read text from a file
 * @filename: file name
 * @letters: number of letters
 * Return: number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t reading, words, writing;

	if (filename == NULL)
		return (0);
	reading = open(filename, O_RDONLY);
	if (reading == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	writing = read(reading, buffer, letters);
	words = write(STDOUT_FILENO, buffer, writing);
	free(buffer);
	close(reading);
	return (words);
}
