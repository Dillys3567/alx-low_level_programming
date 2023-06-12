#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
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
 * print typ - print header type
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
