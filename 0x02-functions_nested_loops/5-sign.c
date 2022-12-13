#include "main.h"
/**
 * print_sign  -entry point
 * @n : number to check
 * Return: alway returns 0 or 1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
