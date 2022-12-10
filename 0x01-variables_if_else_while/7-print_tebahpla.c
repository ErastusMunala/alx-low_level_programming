#include <stdio.h>

/**
 * main - main block
 * Description - prints lowercase alphabet in reverse
 * using putchar
 * Return: 0
 */
int main(void)
{
	char le;

	for (le = 'z'; le >= 'a'; le--)
	{
		putchar(le);
	}
	putchar('\n');

	return (0);
}
