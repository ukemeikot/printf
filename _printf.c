#include "main.h"
/**
 * _printf - a custom printf function
 * @format: the format string
 * @(...): this tells the compiler to
 * expect variable list of arguments
 * Return: It returns the number of charcters printed to the
 * standard output.
 * Return statement of an error is expected if the function is in accurate.
 */

int _printf(const char *format, ...)
{
	int charac_count;
	va_list arguments;
	print my_func_list[] = {
		{"c", char_print},
		{"s", str_print},
		{"%", per_print},
		{"d", int_print},
		{"i", int_print},
		{NULL, NULL}
	};

	va_start(arguments, format);
	if (format == NULL)
	{
		return (-1);
	}
	charac_count = string_parser(format, my_func_list, arguments);
	va_end(arguments);
	return (charac_count);
}
