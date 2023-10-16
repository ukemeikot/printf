#include "main.h"
/**
 * string - the string traversing function
 * @format: the format string to be passed
 * @my_list: a list of all possible arguments
 * @arg: the arguments to be passed
 * @b: buffer
 * @a: buffer index
 * Return: the number of characters printed
 */

int string(const char *format, print my_list[], va_list arg, char *b, int *a)
{
	int j = 0, i = 0, ret_value = 0, char_count = 0, tmp = 0;

for (i = 0; format[i] != '\0'; i++)
{
	if (format[i] == '%')
	{
		for (j = 0; my_list[j].s != NULL; j++)
		{
			if (format[i + 1] == my_list[j].s[0])
			{
				ret_value = my_list[j].printers(arg, b, a);
				if (ret_value == -1)
				return (-1);
				char_count += ret_value;
				break;
			}
		}
		if (my_list[j].s == NULL && format[i + 1] != ' ')
		{
			str_help(format, &i, bf, bd);
		}
			i += 1;
	}
	else
	{
		if (*a >= BUFFER_SIZE - 2)
			buffer_checker(b, a, &tmp);
		else
		{
			b[*a] = format[i];
			a++;
		}
	}
}
	return (*a + tmp);
}
/**
*str_help - string helper function
*@format: the format string
*@i: the format indexer
*@bf: the buffer
*@bd: the buffer index
*Return: nothing
*/

void str_help(char *format, int *i, char *bf, char *bd)
{

	if (format[*i + 1] != '\0')
	{
		if (*a >= BUFFER_SIZE - 2)
			buffer_checker(b, a, &tmp);
		else
		{
			b[*a] = format[*i];
			b[*a] = format[*i + 1];
			*a += 2;
		}
	}
	else
		return (-1);
}
