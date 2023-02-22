#include "main.h"

/**
 * _islower - checks for lower case characters
 * @c: the character to be checked
 * 
 * Return: 1 for lowercase character, 0 if else
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
