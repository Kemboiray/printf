#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/*#include <math.h>*/

/* PROTOTYPES */
int _putchar(char c);
int _printf(const char *format, ...);
void printcs(const char *format, int *count_ptr, va_list args);
int print_char(va_list arg);
int print_str(va_list arg);
int print_percent(void);
/*int print_int(va_list arg);*/
int arsize(int n);
int print_int(int n);
int print_unsigned(unsigned int n, int base);
int print_unsigned_uppercase(unsigned int n, int base);
int print_unsigned_recursive(unsigned int n, int base);
int print_unsigned_recursive_uppercase(unsigned int n, int base);
int print_binary(unsigned int n);
int print_binary_recursion(unsigned int n);
int print_custom_S(char *s);
char int_to_hex(int i);
int print_pointer_hash(void *ptr);

#endif
