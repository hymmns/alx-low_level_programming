#ifndef VARIADIC_FUNCT_H
#define VARIADIC_FUNCT_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);

#endif