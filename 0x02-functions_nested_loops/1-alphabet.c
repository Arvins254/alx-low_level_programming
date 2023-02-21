#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase followed by a new line.
 */
void print_alphabet(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	putchar('\n');
}
