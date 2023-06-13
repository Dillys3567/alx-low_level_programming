#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - display elf header info
 * @argc: number of args
 * @argv: point to array
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *head;
	int op, rd;

	op = open(argv[1], O_RDONLY);
	if (op == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	head = malloc(sizeof(Elf64_Ehdr));
	if (!head)
	{
		elf_close(op);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	rd = read(op, head, sizeof(Elf64_Ehdr));
	if (rd == -1)
	{
		free(head);
		elf_close(op);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	elf_check(head->e_ident);
	printf("ELF Header:\n");
	print_mg(head->e_ident);
	print_cl(head->e_ident);
	print_dt(head->e_ident);
	print_vr(head->e_ident);
	print_os(head->e_ident);
	print_ab(head->e_ident);
	print_typ(head->e_type, head->e_ident);
	print_en(head->e_entry, head->e_ident);
	free(head);
	elf_close(op);
	return (0);
}
