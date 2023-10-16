#include "main.h"
/**
 * print_int - Functinon that print args passed and return int
 * @num: Number of args passed
 * Return: count of @num
 */

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
	return (count);
}
