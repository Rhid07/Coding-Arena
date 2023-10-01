nclude "main.h"

/**
 * _print_str - A function that print a string to the standard output
 * @s: a pointer to a string
 *
 * Return: A charter to the screen
 */

int _print_str(char *s)
{
	int i = 0, r_val = 0;

	if (s)
	{
		while (s[i] != '\0')
		{
			_putchar(s[i]);
			r_val += 1;
			i++;
		}
	}
	return (r_val);
}
