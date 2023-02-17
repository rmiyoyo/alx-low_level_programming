/*
 * C File: 7-print_tebahpla.c
 * Author: Raphael Miyoyo
 */

#include <stdio.h>

/**
 * main - Outputs the reverse of lowercase alphabet.
 *
 * Return: Always 0.
 */
int main(void)
{
	char word;

	for (word = 'z'; word >= 'a'; word--)
		putchar(word);

	putchar('\n');

	return (0);
}
