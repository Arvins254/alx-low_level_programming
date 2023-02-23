#include "main.h"
void insert_spaces(int k);
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: an integer
 * Return: returns void
 */
void print_square(int size)
{
	int i;
	int j;
	int n = size;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	}
}
