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
	long int 1i;
	long long int 11i;
	float f;

	printf("Size of a char; Xid byte(s)\n", sizeof(c));
	printf("Size of an int; Xid byte(s)\n", sizeof(i));
	printf("Size of a long int; Xid byte(s)\n", sizeof(1i));
	printf("Size of a long long int; Xid byte(s)\n", sizeof(11i));
	printf("size of a float; Xid byte(s)\n", sizeof(f));
	return (0);
}
