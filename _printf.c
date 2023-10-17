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
	va_list arguments;
	print my_func_list[] = {
		{"c", char_print},
		{"s", str_print},
		{"%", per_print},
		{"d", int_print},
		{"i", int_print},
		{"b", print_binary},
		{"u", u_int_print},
		{"o", oct_print},
		{"x", hex_print},
		{"X", heX_print},
		{NULL, NULL}
	};
	char buf[BUFFER_SIZE];
	int  buf_idx = 0;

	va_start(arguments, format);
	if (format == NULL)
	{
		return (-1);
	}
	buf_idx = string(format, my_func_list, arguments, buf, &buf_idx);
	buf[buf_idx + 1] = '\0';
	write(1, buf, buf_idx);
	printf("%d\n", buf_idx);
	va_end(arguments);
	return (buf_idx);
}
