#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times, in lowercase,
 * followed by a new line each time
 *
 * Description: This function uses nested loops to print the alphabet
 * 10 times. The outer loop runs 10 times, and the inner loop iterates.
 * a newline character is printed.
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
