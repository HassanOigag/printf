#include "main.h"
/**
 *putnbr - prints a number to stdout
 *@n: the number to print
 *@counter: the address of the counter of printed characters
 *Return: nothing
 */

void putnbr(int n, int *counter)
{
	if (n == -2147483648)
	{
		*counter += putstr("-2147483648", 0);
		return;
	}
	if (n < 0)
	{
		*counter += _putchar('-');
		n = -n;
	}
	if (n >= 0 && n < 10)
		*counter += _putchar(n + '0');
	else
	{
		putnbr(n / 10, counter);
		putnbr(n % 10, counter);
	}
}

/**
 *putnbr_binary - print the binary of a number
 *@n: the number in hand
 *@counter: it counts the printed characters
 *Return: nothing
 */

void putnbr_binary(unsigned int n, int *counter)
{
	if (n == 0 || n == 1)
		*counter += _putchar(n + '0');
	else
	{
		putnbr_binary(n / 2, counter);
		putnbr_binary(n % 2, counter);
	}
}

/**
 *putnbr_hex - print the hex value of an int
 *@n: the number to be converted to hex
 *@isupper: flag to specify if the hex is upper or lower case
 *@counter: countes the printed characters
 *Return: nothing
 */

void putnbr_hex(unsigned int n, int isupper, int *counter)
{
	char *base;

	if (isupper)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n < 16)
		*counter += _putchar(base[n]);
	else
	{
		putnbr_hex(n / 16, isupper, counter);
		putnbr_hex(n % 16, isupper, counter);
	}
}

/**
 *putunbr_octal - prints an unsigned int or converts it to octal
 *@n: the number to be converted
 *@base: the base to conver to
 *@counter: countes the number² of printed characters
 *Return: nothing
 */

void putunbr_octal(unsigned int n, unsigned int base, int *counter)
{
	if (n < base)
		*counter += _putchar(n + '0');
	else
	{
		putunbr_octal(n / base, base, counter);
		putunbr_octal(n % base, base, counter);
	}
}

/**
 *put_address - prints the void *
 *@n: the address to be printed
 *@counter: countes the printed characters
 *Return: returns nothing
 */

void put_address(unsigned long int n, int *counter)
{
	char *base = "0123456789abcdef";

	if (n < 16)
		*counter += _putchar(base[n]);
	else
	{
		put_address(n / 16, counter);
		put_address(n % 16, counter);
	}
}

