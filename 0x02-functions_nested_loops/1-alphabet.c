#include <stdio.h>
/**
 * main - prints the alphabet, in lowercase
 *
 * Return Always 0
 */
int main(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}