#include <stdio.h>

/**
 * main- prints single digits in base 10
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + 'n');
	putchar('\n');

	return (0);
}
