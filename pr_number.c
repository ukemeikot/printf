#include "main.h"
/**
 * print_num - prints interger numbers
 * @arguments: the integer number
 *Return: the numbers printed
*/

int print_num(va_list arguments)
{
	int length = 0, a;
	unsigned int number;
	int divisor = 1;

	a = va_arg(arguments, int);
	if (a < 0)
	{
		length += write_function('-');
		number = a * (-1);
	}
	else
		number = a;
	while ((number / divisor) > 9)
		divisor *= 10;
	while (divisor != 0)
	{
		length += write_function('0' + (number / divisor));
		number %= divisor;
		divisor /= 10;
	}
	return (length);
}
