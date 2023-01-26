#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <math.h>

/* PROTOTYPES */
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list arg);
int print_str(va_list arg);
int print_percent(void);
int print_int(va_list arg);
int print_unsigned(va_list arg);

#endif
