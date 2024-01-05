#include <stdio.h>
/**
 * main - this describes the function of the code
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("SIze of a char:%d byte(s)\n", (unsigned long)sizeof(a));
	printf("size of an int:%d byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int:%d byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int:%d byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float:%d byte(s)\n", (unsigned long)sizeof(e));
return (0);
}
