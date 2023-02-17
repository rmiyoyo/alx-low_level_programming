/*
 * C File: 9-print_comb.c
 * Author: Raphael Miyoyo
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar((digit % 10) + '0');
		if (digit == 9)
		continue;
		
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
