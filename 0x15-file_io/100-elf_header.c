/*
 * File: 100-elf_header.c
 * Auth: David Mark
 */

#include "main.h"
/**
 * print_osabi - Prints the OS/ABI of an ELF header.
 * @e_ptr: A pointer to an array containing the ELF version.
 */
void print_osabi(unsigned char *e_ptr)
{
	printf("  OS/ABI:                            ");

	switch (e_ptr[EI_OSABI])
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
		printf("<unknown: %x>\n", e_ptr[EI_OSABI]);
	}
}

/**
 * print_abi - A function that Prints the ABI version of an ELF header.
 * @e_ptr: It is a pointer to an array containing the ELF ABI version.
 */
void print_abi(unsigned char *e_ptr)
{
	printf("  ABI Version:                       %d\n",
	       e_ptr[EI_ABIVERSION]);
}

/**
 * print_type - A function that Prints the type of an ELF header.
 * @e_type: The ELF type.
 * @e_ptr: A pointer to an array containing the ELF class.
 */
void print_type(unsigned int e_type, unsigned char *e_ptr)
{
	if (e_ptr[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
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
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * close_elf - Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * Description: If the file cannot be closed - exit code 98.
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - Displays the information contained in the
 *        ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the file is not an ELF File or
 *              the function fails - exit code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int op, rf;

	op = open(argv[1], O_RDONLY);
	if (op == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(op);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	rf = read(op, header, sizeof(Elf64_Ehdr));
	if (rf == -1)
	{
		free(header);
		close_elf(op);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elf(header->e_entry);
	printf("ELF Header:\n");
	print_magic(header->e_entry);
	print_class(header->e_entry);
	print_data(header->e_entry);
	print_version(header->e_entry);
	print_osabi(header->e_entry);
	print_abi(header->e_entry);
	print_type(header->e_type, header->e_entry);
	print_entry(header->e_entry, header->e_entry);

	free(header);
	close_elf(op);
	return (0);
}
