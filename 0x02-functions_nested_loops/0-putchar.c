#include "holberton.h"
#include <unistd.h>

/**
 * _putchar - Outputs the character c to stdout
 * '@c': The character to print
 *
 * Return: On success 0.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
