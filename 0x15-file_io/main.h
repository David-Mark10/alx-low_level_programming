#ifndef MAIN_H
#define MAIN_H


#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void close_file(int fd);
void read_file(int fd, char *buf, size_t count);
void print_elf_magic(const unsigned char *buffer;
size_t print_elf_class(const unsigned char *buffer);
int print_elf_data(const unsigned char *buffer);
void print_elf_version(const unsigned char *buffer);
void print_elf_osabi(const unsigned char *buffer);
void print_elf_abivers(const unsigned char *buffer);
void print_elf_type(const unsigned char *buffer, int big_endian);
void print_elf_entry(const unsigned char *buffer, size_t bit_mode, int big_endian)
int compare_strings(const char *s1, const char *s2, size_t n);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);



#endif 
