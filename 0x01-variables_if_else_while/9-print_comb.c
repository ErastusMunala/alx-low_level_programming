#include <stdio.h>

/**
 * main - prints all combinations of single digit numbers
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 48; n < 58; a++)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
