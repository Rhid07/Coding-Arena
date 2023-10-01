nclude <unistd.h>
#include "main.h"

/**
 * _putchar - A function that writes a character to stdoutput
 * @c: character argument
 *
 * Return: A charter to the screen
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
