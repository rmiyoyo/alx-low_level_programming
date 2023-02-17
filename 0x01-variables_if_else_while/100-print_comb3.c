/*
 * C File: 100-print_comb3.c
 * Author: Raphael Miyoyo
 */

#include <stdio.h>

/**
 * main - Outputs all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space
 *
 * Return: Always 0.
 */
int main(void)
{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			if (!((ones == tens) || (tens > ones)))
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
