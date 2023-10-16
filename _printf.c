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
	while (*format != '\0')
	{
		if (*format != '%')
		{
			_putchar(*format);
			count++;
		}
		else
		{
			format++;
			if (*format == 'c')
				count += _putchar(va_arg(args, int));
			else if (*format == 's')
			{
				char *buffer = va_arg(args, char *);
				int i = 0;

				for (; buffer[i] != '\0'; i++)
					count += _putchar(buffer[i]);
			}
			else if (*format == '%')
			{
				_putchar(37);
				count++;
			}
			else if (*format == 'd' || 'i')
			{
				int num = va_arg(args, int);

				count += print_int(num);
			}
		}
		format++;
	}
	va_end(args);
	return (count);
}
