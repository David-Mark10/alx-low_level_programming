#include "main.h"
/**
* print_elf_data - Print the ELF data encoding from a buffer and
* return endianness
*
* @buffer: Buffer containing ELF data encoding
*
* Return: Endianness of data encoding (1 for big endian,
* 0 for little endian)
*/
int print_elf_data(const unsigned char *buffer)
{
        printf("  %-34s ", "Data:");
        if (buffer[EI_DATA] == ELFDATA2MSB)
        {
                printf("2's complement, big endian\n");
                return (1);
        }
        if (buffer[EI_DATA] == ELFDATA2LSB)
        {
                printf("2's complement, little endian\n");
                return (0);
        }
        printf("Invalid data encoding\n");
        return (0);
}
/**
* print_elf_version - Print the ELF version from a buffer
*
* @buffer: Buffer containing ELF version
*/
void print_elf_version(const unsigned char *buffer)
{
        printf("  %-34s %u", "Version:", buffer[EI_VERSION]);
        if (buffer[EI_VERSION] == EV_CURRENT)
                printf(" (current)\n");
        else
                printf("\n");
}
