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
 *putstr - prints a string and non printable hex values
 *@s: the string to be printed
 *Return: returns the size of the string
 */

int putstr(char *s, int all)
{
	int i = 0;
	int counter = 0;

	if (!s)
		s = "(null)";
	while (s[i])
	{
		if (((s[i] > 0 && s[i] < 32) || s[i] >= 127) && all)
		{
			counter += _putchar('\\');
			counter += _putchar('x');
			if (s[i] < 16)
				counter += _putchar('0');
			putnbr_hex((unsigned int)s[i], 1, &counter);
		}
		else
			counter += _putchar(s[i]);
		i++;
	}
	return (counter);
}

