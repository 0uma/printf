#include "main.h"

/**
 * format_specifier - a function
 * @specifier: a parameter
 * @args: 2nd parameter
 * Return: an int
 */

int format_specifier(char specifier, va_list args)
{
	int count;

	count = 0;
	if (specifier == 'c')
		count += _putchar(va_arg(args, int));
	else if (specifier == 's')
	{
		char *buffer = va_arg(args, char *);
		int i = 0;

		for (; buffer[i] != '\0'; i++)
			count += _putchar(buffer[i]);
	}
	else if (specifier == '%')
	{
		_putchar(37);
		count++;
	}
	else if (specifier == 'd' || 'i')
	{
		int num = va_arg(args, int);

		count += print_int(num);
	}
	return (count);
}
