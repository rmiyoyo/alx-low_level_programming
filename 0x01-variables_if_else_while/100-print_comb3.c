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
	int a, b;

	for (a= 48; a<= 56; a++)
	{
		for (b = 49; b <= 57; b++)
		{
			if (b > a)
			{
				putchar(a);
				putchar(b);
				if (a!= 56 || b != 57)
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
