#include "main.h"

/**
 * print_alphabet - print the alphabet, in lowercase, followed by a new line
 *
 * Description: This function uses a loop to print each character
 * from 'a' to 'z'. After printing all the characters, it prints
 * a newline character.
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
