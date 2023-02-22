#include <stdio.h>
#include "main.h"
#define LARGEST 10000000000
/**
 * main - main block
 * Description: Find and print the first 98 fibonacci numbers starting with 1 and 2.
 * Numbers should be coma and space separated.
 * Return: 0
 */
int main(void)
{
	unsigned long int rp1 = 0, hd1 = 1, rp2 = 0, hd2 = 2;
	unsigned long int place1, place2, place3;
	int count;

	printf("%lu, %lu, ", hd1, hd2);
	for (count = 2; count < 98; count++)
	{
		if (hd1 + hd2 > LARGEST || rp2 > 0 || rp1 > 0)
		{
			place1 = (hd1 + hd2) / LARGEST;
			place2 = (hd1 + hd2) % LARGEST;
			place3 = rp1 + rp2 + place1;
			rp1 = rp2, rp2 = place3;
			hd1 = hd2, hd2 = place2;
			printf("%lu%010lu", rp2, hd2);
		}
		else
		{
			place2 = hd1 + hd2;
			hd1 = hd2, hd2 = place2;
			printf("%lu", hd2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
