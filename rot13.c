#include "main.h"

/**
 * rot_13 - prints a string using rot13
 * @ap: list of arguments from _printf
 * @counter: pointer to the lenght of the string
 * Return: length of the printed string
 */
int rot_13(va_list ap, int *counter)
{
	int i, counter;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s = va_arg(ap, char *);

	for (counter = 0; s[counter]; counter++)
	{
		if (s[counter] < 'A' || (s[counter] > 'Z' && s[counter] < 'a') || s[counter] > 'z')
			_putchar(s[counter]);
		else
		{
			for (i = 0; i <= 52; i++)
			{
				if (s[counter] == rot13[i])
					_putchar(ROT13[i]);
			}
		}
	}

	return (counter);
}
