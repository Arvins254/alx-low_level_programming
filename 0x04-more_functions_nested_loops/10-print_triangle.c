#include "main.h"
void insert_spaces(int k);
void insert_tags(int l);
/**
 * print_triangle - prints a triangle
 * @size: an integer
 * Return: returns void
 */
void print_triangle(int size)
{
	int i;
	int n = size;
	int spaces = n - 1;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			insert_spaces(spaces--);
			insert_tags(i + 1);
			_putchar(10);
		}
	}
}
