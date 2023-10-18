#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int send_form(const char *format, va_list args);
int prt_str(const char *str);
int prt_hex(int value);
int prt_int(int num);
int prt_unsigned(unsigned int num);
int prt_oct(unsigned int num);
int prt_unsigned_recur(unsigned int num);
int prt_oct_recur(unsigned int num);
int prt_cstm_str(const char *s);
int prt_bin(unsigned int num);
int prt_ptr(void *ptr);
int prt_hexa(unsigned int num, int uppercase);
int prt_bin_recur(unsigned int num);
int _putchar(char c);
#endif /* MAIN_H */
