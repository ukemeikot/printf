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
<<<<<<< HEAD
	int j, i, ret_value, tmp;

	j = i = ret_value = tmp = 0;
=======
	int j = 0, i = 0, ret_value = 0, tmp = 0;

>>>>>>> main
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; my_list[j].s != NULL; j++)
			{
				if (format[i + 1] == my_list[j].s[0])
				{
<<<<<<< HEAD
					ret_value = my_list[j].printers(arg, b, a);
					if (ret_value == -1)
						return (-1);
=======
				ret_value = my_list[j].printers(arg, b, a);
				if (ret_value == -1)
				return (-1);
>>>>>>> main
				}
			}
			if (my_list[j].s == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					str_help(format, &i, b, a, &tmp);
				}
				else
					return (-1);
			}
			i += 1;
		}
		else
		{
			if (*a >= BUFFER_SIZE - 2)
				buffer_checker(b, a, &tmp);
			else
<<<<<<< HEAD
				b[(*a)++] = format[i];
=======
			{
				b[(*a)++] = format[i];
			}
>>>>>>> main
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
<<<<<<< HEAD
*@tmp: temporary holder
=======
*@tmp: the temporary storage
>>>>>>> main
*Return: nothing
*/

void str_help(const char *format, int *i, char *bf, int *bd, int *tmp)
{
	if (*bd >= BUFFER_SIZE - 2)
		buffer_checker(bf, bd, tmp);
	else
	{
<<<<<<< HEAD
		bf[(*bd)] = format[*(i)];
		bf[(*bd)] = format[(*i) + 1];
=======
		bf[*bd] = format[*i];
		bf[*bd] = format[*i + 1];
		*bd += 2;
>>>>>>> main
	}
}
