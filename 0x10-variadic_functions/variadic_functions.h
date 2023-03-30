#ifndef VARIADIC_FUNCT_H
#define VARIADIC_FUNCT_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_integer(const char *separator, va_list ap);
void print_float(const char *separator, va_list ap);
void print_char(const char *separator, va_list ap);
void print_string(const char *separator, va_list ap);
/**
 * struct format_types - struct format_types
 * @delimiter: char - delimiter.
 * @callback: function pointer
 */
typedef struct format_types
{
	char delimiter;
	void (*callback)(const char *separator, va_list ap);
} format_types;

#endif
