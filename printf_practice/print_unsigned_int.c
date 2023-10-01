nclude "main.h"
#include <stdarg.h>

/**
 * _print_unsigned - A function that prints an unsigned integer.
 * @num: Unsigned integer parameter.
 *
 * Return: The number.
 */

int _print_unsigned(unsigned int num)
{
	int reversed = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		int digit = num % 10;

		reversed = reversed * 10 + digit;
		num /= 10;
	}

	while (reversed > 0)

	{
		int digit = reversed % 10;

		_putchar('0' + digit);
		reversed /= 10;
	}
	return (0);
}
