#include "main.h"
/**
 * char_print - prints ccharacter to standard output
 * @arguments: the arguments to be printed.
 * @bf: buffer
 * @bd: buffer index
 * Return: returns 1
 */
int char_print(va_list arguments, char *bf, int *bd)
{
	int tmp = 0;

	if (*bd >= BUFFER_SIZE - 2)
		buffer_checker(bf, bd, &tmp);
	else
	{
		bf[(*bd)++] = va_arg(arguments, int);
	}
	return (*bd + tmp);
}
/**
 * str_print - prints string to the screen
 * @arguments: the arguments to be passed
 * @bf: buffer
 * @bd: buffer index
 * Return: the number of arguments printed.
 */
int str_print(va_list arguments, char *bf, int *bd)
{
	char *s = va_arg(arguments, char *);
	int a = 0, tmp = 0;

	if (s == NULL)
	{
		s = "(null)";
	}
	while (s[a] != '\0')
	{
		if (*bd >= BUFFER_SIZE - 2)
			buffer_checker(bf, bd, &tmp);
		else
		{
			bf[(*bd)++] = s[a];
		}
		a++;
	}
	return (*bd + tmp);
}
/**
 * int_print - prints integers
 * @arguments: the argument to be printed
 * @bf: buffer
 * @bd: buffer index
 * Return: the length printed
 */

int int_print(va_list arguments, char *bf, int *bd)
{
	int len;

	len = print_num(arguments, bf, bd);
	return (len);
}
/**
 * per_print - prints percent to the screen
 * @arguments: the arguments passed
 * @bf: buffer
 * @bd: buffer index
 * Return: the number of charcters printed
 */
int per_print(__attribute__((unused))va_list arguments, char *bf, int *bd)
{
	int tmp = 0;

	if (*bd >= BUFFER_SIZE)
		buffer_checker(bf, bd, &tmp);
	else
	{
		bf[(*bd)++] = '%';
	}
	return (*bd + tmp);
}
