#include "main.h"
/**
 * print_binary - prints binary numbers
 * @arguments: the arguments to be passed
 * Return: the number of characters printed.
 */

int print_binary(va_list arguments)
{
	unsigned int input_num, temp, length = 0, i;
	int a = 0, len, b, c;
	char *s, *str;

	input_num = va_arg(arguments, unsigned int);
	temp = input_num;
	if (input_num == 0)
		return (write_function('0'));
	while (temp > 0)
	{
		temp /= 2;
		i++;
	}
	s = malloc((sizeof(char)) * i + 1);
	str = malloc((sizeof(char)) * i + 1);
	if (s == NULL)
		return (-1);
	if (str == NULL)
		return (-1);
	for (a = 0; input_num > 0; a++)
	{
		if (input_num % 2 == 0)
			s[a] = '0';
		else
			s[a] = '1';
		input_num /= 2;
	}
	s[a] = '\0';
	len = strlen(s);
	for (b = 0; b < len; b++)
		str[b] = s[len - b - 1];
	str[b] = '\0';
	for (c = 0; str[c] != '\0'; c++)
		length += write_function(str[c]);
	free(str);
	free(s);
	return (length);
}
