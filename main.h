
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <string.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_fstring(int *pos, const char *format, va_list ap);
int print_string(va_list ap);
int print_char(va_list ap);
int print_percent(va_list ap);
int print_int(va_list ap);
int print_unsigned_int(va_list ap);
int print_octal_number(va_list ap);
int print_hexadecimal(va_list ap);
int print_hexadecimal_cap(va
