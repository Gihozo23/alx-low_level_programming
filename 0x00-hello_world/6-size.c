#include<stdio.h>
/**
*main -Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	printf("Size of a char: %d bytes\n", sizeof(char));
	printf("Size of an int: %d bytes\n", sizeof(int));
	printf("Size of an long int: %d bytes\n", sizeof(long int));
	printf("Size of an long long int: %d bytes\n", sizeof(long long int));
	pintf("Size of a float: %d bytes\n", sizeof(float));
	return(0);
}
