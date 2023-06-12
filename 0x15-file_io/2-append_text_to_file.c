#include "main.h"
/**
 * append_text_to_file - append text
 * @filename: file name
 * @text_content: text
 * Return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, ws, len = 0;

	if (!filename)
		return (-1);
	if (text_content)
	{
		for (; text_content[len];)
			len++;
	}
	op = open(filename, O_WRONLY | O_APPEND);
	ws = write(op, text_content, len);
	if (op == -1 || ws == -1)
		return (-1);
	close(op);
	return (-1);
}
