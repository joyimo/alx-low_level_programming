#include <stdio.h>

/*
 * main - Entry point
 * 
 * Return: Always 0 success
 **/
int main(void)
{
	int i;
	char c;
	long int li;
	long long int lli;
	float f;

	printf("Size of a int: %ld\n", sizeof(i));
	printf("Size of an char: %ld\", sizeof(c));
	printf("Size of a long int: %ld\n", sizeof(li));
	printf("Size of a long long int: %d\n", sizeof(lli));
	printf("Size of a float: %d\n", sizeof(f));
	return (0);
}
