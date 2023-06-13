#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_os - print os/abi of header
 * @ident: pointer to array of elf version
 */
void print_os(unsigned char *ident)
{
	printf(" OS/ABI: ");
	switch (ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", ident[EI_OSABI]);
	}
}
/**
 * print_ab - print abi
 * @ident: pointer to abi version
 */
void print_ab(unsigned char *ident)
{
	printf(" ABI Version: %d\n",  ident[EI_ABIVERSION]);
}
/**
 * print_typ - print header type
 * @type: elf type
 * @ident: pointer to elf class
 */
void print_typ(unsigned int type, unsigned char *ident)
{
	if (ident[EI_DATA] == ELFDATA2MSB)
		type >>= 8;
	printf(" Type: ");
	switch (type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", type);
	}
}
/**
 * print_en - entry point
 * @entry: address
 * @ident: pointer to elf class
 */
void print_en(unsigned long int entry, unsigned char *ident)
{
	printf(" Entry point address: ");
	if (ident[EI_DATA] == ELFDATA2MSB)
	{
		entry = ((entry << 8) & 0xFF00FF00) | ((entry >> 8) & 0xFF00FF);
		entry = (entry << 16) | (entry >> 16);
	}
	if (ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entry);
	else
		printf("%#lx\n", entry);
}
/**
 * elf_close - close elf
 * @elf: elf
 */
void elf_close(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
		exit(98);
	}
}
