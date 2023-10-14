#include "main.h"
/**
 * print_num - prints interger numbers
 * @n: the integer number
 *Return: the numbers printed
*/

int print_num(int n)
{
	int len = 0;

	if (n < 0)
	{
		len = write_function('-');
		n = -n;
	}
	if (n / 10)
		print_num(n / 10);
	len += write_function(n % 10 + '0');
	return (len);
}
