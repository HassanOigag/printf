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
 *@all: weather to print non printables or not
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

/**
 *rev_str - prints the reverse string
 *@str: the string in hand
 *Return: the number of chars in string
 */

int rev_str(char *str)
{
	int i = 0;
	int counter = 0;

	if (!str)
		return (putstr("(null)", 0));
	while (str[i])
		i++;
	i--;
	while (i >= 0)
	{
		counter += _putchar(str[i]);
		i--;
	}
	return (counter);
}

/**
 *rot13 - prints the rotated string
 *@str: the string in hand
 *Return: number of printed characters
 */

int rot13(char *str)
{
	int i = 0;
	int counter = 0;

	if (!str)
		return (putstr("(null)", 0));
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			counter += _putchar((((str[i] - 'a') + 13) % 26) + 'a');
		else if (str[i] >= 'A' && str[i] <= 'Z')
			counter += _putchar((((str[i] - 'A') + 13) % 26) + 'A');
		else
			counter += _putchar(str[i]);
		i++;
	}
	return (counter);
}
