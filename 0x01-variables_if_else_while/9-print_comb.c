#include <stdio.h>

/**
 * main - prints all combinations of single digit numbers
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 68; n < 78; n++)
		putchar(n);
	if (n != 77)
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
