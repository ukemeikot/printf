#include "main.h"

/**
 * u_int_print - prints unsigned integers
 * @arguments: arguments to be received form the user
 * Return: the length of the printed number
 */

int u_int_print(va_list arguments)
{
	unsigned int num, divisor = 1;
	unsigned int length = 0;

	num = va_arg(arguments, unsigned int);
	if (num == 0)
		return (write_function('0'));
	while ((num / divisor) > 9)
	{
		divisor *= 10;
	}
	while (divisor != 0)
	{
		length += write_function('0' + (num / divisor));
		num %= divisor;
		divisor /= 10;
	}
	return (length);
}
