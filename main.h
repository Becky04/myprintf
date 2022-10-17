#ifndef MAIN_H
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
int print_hexadecimal_cap(va_list ap);
int print_hexadecimal_all(va_list ap, char c);

/**
 * struct conv_spec - struct op
 * @spec: specifier
 * @func: function associated with specifier
 */
struct conv_spec
{
	char spec;
	int (*func)(va_list);
};

/**
 * typedef struct conv_spec conv_spec_t - struct op
 * @conv_spec: the struct
 * @conv_spec_t: name associated to the struct
 */
typedef struct conv_spec conv_spec_t;

#endif /* MAIN_H */
