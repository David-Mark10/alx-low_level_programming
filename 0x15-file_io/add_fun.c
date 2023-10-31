#include "main.h"

/**
 * check_elf - A function that Checks if a file is an ELF file.
 * @e_ptr: Is a pointer to an array containing the magic numbers ELF.
 *
 * Description: If the file is not an ELF file - exit code 98.
 */
void check_elf(unsigned char *e_ptr)
{
        int j;

        for (j = 0; j < 4; j++)
        {
                if (e_ptr[j] != 127 &&
                    e_ptr[j] != 'E' &&
                    e_ptr[j] != 'L' &&
                    e_ptr[j] != 'F')
                {
                        dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
                        exit(98);
                }
        }
}

/**
 * print_magic - A function that Prints the magic numbers of an ELF header.
 * @e_ptr: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Magic numbers are separated by spaces.
 */
void print_magic(unsigned char *e_ptr)
{
        int j;

        printf("  Magic:   ");

        for (j = 0; j < EI_NIDENT; j++)
        {
                printf("%02x", e_ptr[j]);

                if (j == EI_NIDENT - 1)
                        printf("\n");
                else
                        printf(" ");
        }
}

/**
 * print_class - A function that Prints the class of an ELF header.
 * @e_ptr: A pointer to an array containing the ELF class.
 */
void print_class(unsigned char *e_ptr)
{
        printf("  Class:                             ");

        switch (e_ptr[EI_CLASS])
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
                printf("<unknown: %x>\n", e_ptr[EI_CLASS]);
        }
}

/**
 * print_data - A function that Prints the data of an ELF header.
 * @e_ptr: A pointer to an array containing the ELF class.
 */
void print_data(unsigned char *e_ptr)
{
        printf("  Data:                              ");

        switch (e_ptr[EI_DATA])
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
                printf("<unknown: %x>\n", e_ptr[EI_CLASS]);
        }
}

/**
 * print_version - Prints the version of an ELF header.
 * @e_ptr: A pointer to an array containing the ELF version.
 */
void print_version(unsigned char *e_ptr)
{
        printf("  Version:                           %d",
               e_ptr[EI_VERSION]);

        switch (e_ptr[EI_VERSION])
        {
        case EV_CURRENT:
                printf(" (current)\n");
                break;
        default:
                printf("\n");
                break;
        }
}
