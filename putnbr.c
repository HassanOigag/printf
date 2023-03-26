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
		*counter += putstr("-2147483648");
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
