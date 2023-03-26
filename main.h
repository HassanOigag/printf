#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <limits.h>

int		_putchar(int c);
int 	putstr(char *s);
int 	_printf(const char *format, ...);
void	putnbr(int n, int *counter);
void	putnbr_binary(unsigned int n, int *counter);
void	putnbr_hex(unsigned int n, int isupper, int *counter);
void 	putunbr_octal(unsigned int n, int base, int *counter);

#endif
