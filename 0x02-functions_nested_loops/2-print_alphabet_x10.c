#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description - print 10 times the alphabet, in lowercase, and a new line.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int al;
	char alphabet;

	for (al = 0; al <= 9; al++)
	{
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	_putchar(alphabet);
	_putchar('\n');
	}
}
