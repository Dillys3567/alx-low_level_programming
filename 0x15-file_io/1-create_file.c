#include "main.h"
/**
 * create_file - create file
 * @filename: file name
 * @text_content: file content
 * Return: 1 on succes -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int filed, words, len = 0;

	if (!filename)
		return (-1);
	if (text_content != NULL)
	{
		for (; text_content[len];)
			len++;
	}
	filed = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	words = write(filed, text_content, len);
	if (filed == -1 || words == -1)
		return (-1);
	close(filed);
	return (1);
}
