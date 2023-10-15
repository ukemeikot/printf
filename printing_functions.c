#include "main.h"
/**
 * char_print - prints ccharacter to standard output
 * @arguments: the arguments to be printed.
 * Return: returns 1
 */
int char_print(va_list arguments)
{
	write_function(va_arg(arguments, int));
	return (1);
}
/**
 * str_print - prints string to the screen
 * @arguments: the arguments to be passed
 * Return: the number of arguments printed.
 */
int str_print(va_list arguments)
{
	char *s = va_arg(arguments, char *);
	int a = 0;

	if (s == NULL)
	{
		s = "(null)";
	}
	while (s[a] != '\0')
	{
		write_function(s[a]);
		a++;
	}
	return (a);
}
/**
 * int_print - prints integers
 * @arguments: the argument to be printed
 * Return: the length printed
 */

int int_print(va_list arguments)
{
	int len = 0;

	len += print_num(va_arg(arguments, int));
	return (len);
}
/**
 * per_print - prints percent to the screen
 * @arguments: the arguments passed
 * Return: the number of charcters printed
 */
int per_print(__attribute__((unused))va_list arguments)
{
	write_function('%');
	return (1);
}
/**
 * u_int_print - print unsigned number
 * @arguments: the arguments passed
 * Return: the length of the number printed
 */
int u_int_print(va_list arguments)
{
	int len = 0;
	int num;

	num = va_arg(arguments, unsigned int);
	if (num == 0)
		len += write_function(num);
	if (num < 0)
		return (-1);
	len += print_num(num);
	return (len);
}
