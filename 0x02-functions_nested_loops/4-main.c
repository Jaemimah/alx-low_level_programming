#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
	
	for (c = 'A'; c <= 'z'; c++)
	{
		if (_isalpha(c))
		{
			printf("%c is an alphabetic character\n", c);
		}
		else
		{
			printf("%c is not an alphabetic character\n", c);
		}
	}
	return (0);
}
