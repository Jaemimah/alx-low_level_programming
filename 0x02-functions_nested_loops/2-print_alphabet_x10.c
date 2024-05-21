#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times, in lowercase, followed by a new line each time
 *
 * Description: This function uses bested loops to print alphabet characters
 * from 'a' to 'z', ten times. After printing all the characters, it prints
 * a newline character.
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	}
}
