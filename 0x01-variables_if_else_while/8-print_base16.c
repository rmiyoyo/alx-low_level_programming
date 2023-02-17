/*
 * C File: 8-print_base16.c
 * Author: Raphael Miyoyo
 */

#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int digit;
	char word;

	for (digit = 0; digit < 10; digit++)
		putchar((digit % 10) + '0');

	for (word = 'a'; word <= 'f'; word++)
		putchar(word);

	putchar('\n');

	return (0);
}
