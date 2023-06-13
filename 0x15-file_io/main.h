#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void elf_check(unsigned char *ident);
void print_mg(unsigned char *ident);
void print_cl(unsigned char *ident);
void print_dt(unsigned char *ident);
void print_vr(unsigned char *ident);
void print_os(unsigned char *ident);
void print_ab(unsigned char *ident);
void print_typ(unsigned int type, unsigned char *ident);
void print_en(unsigned long int entry, unsigned char *ident);
void elf_close(int elf);

#endif
