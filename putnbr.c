#include "main.h"

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
