/*
 * C File: 2-print_alphabet.c
 * Author: Raphael Miyoyo
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, newline.
 *
 * Return: Always 0.
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
