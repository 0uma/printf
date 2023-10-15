#include "main.h"
/**
 * _printf - a function that prints strings, characters, and "%"
 * @format: a parameter
 * Return: returns an int
 */

int _printf(const char *format, ...)
{
	int count;
	va_list args;

	va_start(args, format);

	count = 0;
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
int print_int(int num)
{
        int count = 0;

        if (num < 0)
        {
                _putchar('-');
                count++;
                num = -num; 
        }
        if (num == 0)
        {
                _putchar('0');
                count++;
        }
        else
        {
            int reverse_num = 0;
            int num_digits = 0;
            
            int temp = num;
            while (temp != 0)
            {
                num_digits++;
                temp /= 10;
            }
            temp = num;
            while (temp != 0)
            {
                reverse_num = reverse_num * 10 + temp % 10;
                temp /= 10;
            }
            while (reverse_num != 0)
            {
                _putchar(reverse_num % 10 + '0');
                count++;
                reverse_num /= 10;
            }
        }
        return count;
}
