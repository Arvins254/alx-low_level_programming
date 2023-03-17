#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
	char *s0 = "Bob Dylan";
	char *s1 = "Robert Allen";

	printf("%s, %s\n", s0, s1);
	set_string(&s1, s0);
	printf("%s, %s\n", s0, s1);
<<<<<<< HEAD
		return (0);
=======
	return (0);
>>>>>>> 6af03b7934bd064920a5be8a0a205c8e5489e55a
}
