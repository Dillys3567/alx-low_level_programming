#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * elf_check - check elf file
 * @ident: pointer to magic numbers
 */
void elf_check(unsigned char *ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (ident[i] != 127 &&
			ident[i] != 'E' &&
			ident[i] != 'L' &&
			ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}
/**
 * print_mg - print magic numbers
 * @ident: pointer to magic numbers
 */
void print_mg(unsigned char *ident)
{
	int i;

	printf(" Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", ident[i]);
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}
/**
 * print_cl - print class
 * @ident: pointer to array
 */
void print_cl(unsigned char *ident)
{
	printf(" Class: ");
	switch (ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", ident[EI_CLASS]);
	}
}
/**
 * print_dt - print data
 * @ident: pointer to magic numbers
 */
void print_dt(unsigned char *ident)
{
	printf(" Data: ");
	switch (ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", ident[EI_CLASS]);
	}
}
/**
 * print_vr - print elf header version
 * @ident: pointer to magic numbers
 */
void print_vr(unsigned char *ident)
{
	printf(" Version: %d", ident[EI_VERSION]);
	switch (ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}
