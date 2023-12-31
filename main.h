#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_int(int num);
int format_specifier(char specifier, va_list args);

#endif
