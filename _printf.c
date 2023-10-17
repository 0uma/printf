#include "main.h"
/**
 * _printf - a function that prints strings, characters, and "%"
 * @format: a parameter
 * Return: returns an int
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);

	if (*format == '\0' || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (*format)
	{
		if (*format != '%')
		{
			_putchar(*format);
			count++;
		}
		else
			count += format_specifier(*++format, args);
		format++;
	}
	va_end(args);
	return (count);
}
