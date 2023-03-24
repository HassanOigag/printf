#include "main.h"

/**
 *_putchar - prtins a single a character
 *@c: the character to be printed
 *Return: returns 1
 */

int _putchar(int c)
{
	return (write(1, &c, 1));
}

/**
 *putstr - prints a string
 *@s: the string to be printed
 *Return: returns the size of the string
 */

int putstr(char *s)
{
	int i = 0;
	int counter = 0;

	if (!s)
		s = "(null)";
	while (s[i])
	{
		counter += _putchar(s[i]);
		i++;
	}
	return (counter);
}
