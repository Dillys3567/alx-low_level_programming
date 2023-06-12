#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_buff - buffer creator
 * @file: file name
 * Return: pointer to buffer
 */
char *create_buff(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (!buff)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buff);
}
/**
 * closef - close file
 * @fd: descriptor
 */
void closef(int fd)
{
	int x;

	x = close(fd);
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copy file content to another
 * @argc: number of args
 * @argv: array of pointers
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fr, too, rd, wr;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = create_buff(argv[2]);
	fr = open(argv[1], O_RDONLY);
	rd = read(fr, buff, 1024);
	too = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (fr == -1  || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		wr = write(too, buff, rd);
		if (too == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		rd = read(fr, buff, 1024);
		too = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);
	free(buff);
	closef(fr);
	closef(too);
	return (0);
}
