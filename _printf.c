#include "main.h"


int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int count = 0;

	while (*format != '\0')
	{
		if (*format != '%')
		{
			_putchar(*format);
			count++;
		}
		else
		{
			*format++;
			if (*format == 'c')
			{
				count += _putchar(va_arg(args, int));
			}
			else if (*format == 's')
			{
				char *buffer = va_arg(args, char *);
				int i = 0;

				for (; buffer[i] != '\0'; i++)
				{
					count += _putchar(buffer[i]);
				}
			}
			else if (*format == '%')
			{
				_putchar(37);
				count++;
			}
		}
		format++;
	}
	return (count);
}