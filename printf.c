#include "main.h"

/**
 *_printf - prints a formatted string
 *@format: the format of the string to print
 *Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int counter = 0;
	va_list ap;

	va_start(ap, format);
	if (!format)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (!format[i])
				return (-1);
			if (format[i] == 'c')
				counter += _putchar(va_arg(ap, int));
			else if (format[i] == 's')
				counter += putstr(va_arg(ap, char *));
			else if (format[i] == '%')
				counter += _putchar('%');
			else if (format[i] == 'd' || format[i] == 'i')
				putnbr(va_arg(ap, int), &counter);
			else if (format[i] == 'b')
				putnbr_binary(va_arg(ap, int), &counter);
			else if (format[i] == 'u')
				putunbr_octal(va_arg(ap, unsigned int), 10, &counter);
			else if (format[i] == 'o')
				putunbr_octal(va_arg(ap, unsigned int), 8, &counter);
			else if (format[i] == 'x')
				putnbr_hex(va_arg(ap, unsigned int), 0, &counter);
			else if (format[i] == 'X')
				putnbr_hex(va_arg(ap, unsigned int), 1, &counter);
			else
			{
				counter += _putchar('%');
				counter += _putchar(format[i]);
			}
		}
		else
			counter += _putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (counter);
}
