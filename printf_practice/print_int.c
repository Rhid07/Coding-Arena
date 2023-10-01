#include "main.h"

/**
 * _print_int - A function that print an integer out
 * @num: character argument
 *
 * Return: A return an integer
 */

int _print_int(int num)
{
	int r_val = 0, n;

	if (num == 0)
	{
		return (1);
	}

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	n = num / 10;

	_print_int(n);
	_putchar((num % 10) + '0');

	return (r_val);
}#include "main.h"

/**
 * _print_int - A function that print an integer out
 * @num: character argument
 *
 * Return: A return an integer
 */

int _print_int(int num)
{
	int r_val = 0, n;

	if (num == 0)
	{
		return (1);
	}

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	n = num / 10;

	_print_int(n);
	_putchar((num % 10) + '0');

	return (r_val);
}
