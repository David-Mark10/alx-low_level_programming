#include "main.h"
/**
 * compare_strings - Compare two strings of size n
 *
 * @s1: First string to be compared
 * @s2: Second string to be compared
 * @n: Number of characters to compare
 *
 * Return: 0 if strings are equal, negative number if s1
 * is less than s2,positive number if s1 is greater than s2.
 */
int compare_strings(const char *s1, const char *s2, size_t n)
{
        for (; n && *s1 && *s2; --n, ++s1, ++s2)
        {
                if (*s1 != *s2)
                        return (*s1 - *s2);
        }
        if (n)
        {
                if (*s1)
                        return (1);
                if (*s2)
                        return (-1);
        }
        return (0);
}
/**
* close_file - Close a file descriptor and exit on error
*
* @fd: File descriptor to close
*/
void close_file(int fd)
{
        if (close(fd) != -1)
                return;
        write(STDERR_FILENO, "Error: Can't close fd\n", 22);
        exit(98);
}

/**
* read_file - Read from a file descriptor into
* a buffer and exit on error
*
* @fd: File descriptor to read from
* @buf: Buffer to store read data
* @count: Number of bytes to read from fd into buf
*/
void read_file(int fd, char *buf, size_t count)
{
        if (read(fd, buf, count) != -1)
                return;
        write(STDERR_FILENO, "Error: Can't read from file\n", 28);
        close_file(fd);
        exit(98);
}
/**
* print_elf_magic - Print the ELF magic number from a buffer
*
* @buffer: Buffer containing ELF magic number
*/
void print_elf_magic(const unsigned char *buffer)
{
        unsigned int i;

        if (compare_strings((const char *) buffer, ELFMAG, 4))
        {
                write(STDERR_FILENO, "Error: Not an ELF file\n", 23);
                exit(98);
        }
        printf("ELF Header:\n  Magic:   ");
        for (i = 0; i < 16; ++i)
                printf("%02x%c", buffer[i], i < 15 ? ' ' : '\n');
}
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
