#include "main.h"
/**
 * print_num - prints interger numbers
 * @arguments: the integer number
 * @bf: buffer
 * @bd: buffer index
 *Return: the numbers printed
*/

int print_num(va_list arguments, char *bf, int *bd)
{
	int a, tmp = 0;
	unsigned int number;
	int divisor = 1;

	a = va_arg(arguments, int);
	if (a < 0)
	{
		if (*bd >= BUFFER_SIZE - 2)
			buffer_checker(bf, bd, &tmp);
		else
		{
			bf[*bd++] = '-';
			number = a * (-1);
		}
	}
	else
		number = a;
	while ((number / divisor) > 9)
		divisor *= 10;
	while (divisor != 0)
	{
		if (*bd >= BUFFER_SIZE - 2)
			buffer_checker(bf, bd, &tmp);
		else
		{
			bf[*bd++] = '0' + (number / divisor);
		}
		number %= divisor;
		divisor /= 10;
	}
	return (*bd + tmp);
}
