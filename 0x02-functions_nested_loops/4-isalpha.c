#include "main.h"
/**
 * _isalpha - Entry point
 * Description: checks for alphabets
 * @c:  character to be checked
 * Return: 1 if character is a letter, 0 if FALSE
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
