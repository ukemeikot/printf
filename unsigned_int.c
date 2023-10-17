#include "main.h"

/**
 * u_int_print - prints unsigned integers
 * @arguments: arguments to be received form the user
 * @bf: buffer container
 * @bd: buffer index
 * Return: the length of the printed number
 */

int u_int_print(va_list arguments, char *bf, int *bd)
{
	unsigned int num, divisor = 1;
	int tmp = 0;

	num = va_arg(arguments, unsigned int);
	if (num == 0)
	{
		if (*bd >= BUFFER_SIZE - 2)
			buffer_checker(bf, bd, &tmp);
		else
		{
			bf[*bd++] = '0';
			return (*bd + tmp);
		}
	}
	while ((num / divisor) > 9)
	{
		divisor *= 10;
	}
	while (divisor != 0)
	{
		if (*bd >= BUFFER_SIZE - 2)
			buffer_checker(bf, bd, &tmp);
		else
		{
			bf[*bd++] = '0' + (num / divisor);
		}
		num %= divisor;
		divisor /= 10;
	}
	return (*bd + tmp);
}
