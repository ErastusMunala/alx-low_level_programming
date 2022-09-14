#include <stdio.h>

/**
* main - print the string in the put function
*
* Description: using the main function
* this program prints the size of various types on the computer it is compiled and run on
* Return: 0
*/
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char: %c byte(s)\n", sizeof(c));
	printf("Size of an int: %i byte(s)\n", sizeof(c));
	printf("Size of a long int: %li byte(s)\n", sizeof(li));
	printf("Size of a long long int: %lli byte(s)\n", sizeof(lli));
	printf("Size of a float: %f byte(s)\n", sizeof(f));
	return (0);
}
