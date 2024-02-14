#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num;
	{
	while (num < 10)
	{
	printf("%d", num);
	num += 1;
	}
	putchar('\n');
	return (0);
	}
}
