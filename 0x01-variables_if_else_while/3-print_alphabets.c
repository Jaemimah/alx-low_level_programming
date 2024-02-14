#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int alphabet = 'a';

	int ALPHABET = 'A';

	while (alphabet <= 'z')

	{
	putchar(alphabet);
	alphabet += 1;
	}
	while (ALPHABET <= 'Z')
	{
	putchar(ALPHABET);
	ALPHABET += 1;
	}
	putchar('\n');
	return (0);
}
