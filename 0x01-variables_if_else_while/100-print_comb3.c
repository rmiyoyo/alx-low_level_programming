/*
 * C File: 100-print_comb3.c
 * Author: Raphael Miyoyo
 */

#include <stdio.h>

/**
 * main - Outputs all possible combinations of two different digits,
 *        in ascending order, separated by a , followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int number1, number2;

	for (number1 = 0; number1 < 9; number1++)
	{
		for (number2 = number1 + 1; number2 < 10; number2++)
		{
			putchar((number1 % 10) + '0');
			putchar((number2 % 10) + '0');

			if (number1 == 8 && number2 == 9)
				continue;
			
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
