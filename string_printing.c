#include "main.h"
/**
 * string_parser - the string traversing function
 * @format: the format string to be passed
 * @my_list: a list of all possible arguments
 * @arguments: the arguments to be passed
 * Return: the number of characters printed
 */

int string_parser(const char *format, print my_list[], va_list arguments)
{	int j = 0, i = 0, ret_value = 0, char_count = 0;

for (i = 0; format[i] != '\0'; i++)
{
	if (format[i] == '%')
	{
		if (format[i + 1] == '\0')
		{
			break;
		}
		for (j = 0; my_list[j].s != NULL; j++)
		{
		if (format[i + 1] == my_list[j].s[0])
		{
			ret_value += my_list[j].printers(arguments);
			if (ret_value == -1)
				return (-1);
			char_count += ret_value;
			break;
		}
		}
		if (my_list[j].s == NULL && format[i + 1] != ' ')
		{
			if (format[i + 1] != '\0')
			{
				write_function(format[i]);
				write_function(format[i + 1]);
				char_count += 2;
			}
			else
				return (-1);
		}
			i += 1;
	}
	else
	{
		write_function(format[i]);
		char_count++;
	}
}
	return (char_count);
}
