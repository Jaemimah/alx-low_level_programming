#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @n: number to take the last digit from
 *
 * Return:value of the last digit
 */

int print_last_digit(int n)
{
i
	int last_digit = n % 10;

	if (last_digit < 0)
	{
	last_digit = -last_digit;
	}

	_putchar(last_digit + '0');
	return (last_digit);
}
