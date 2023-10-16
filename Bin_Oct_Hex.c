#include "main.h"
/**
 * print_binary - prints binary numbers
 * @arguments: the arguments to be passed
 * Return: the number of characters printed.
 */

int print_binary(va_list arguments, char *bf, int *bd)
{
	unsigned int input_num, temp, length = 0, i;
	int a = 0, len, b, c, tmp = 0;
	char *s, *str;

	input_num = va_arg(arguments, unsigned int);
	temp = input_num;
	if (input_num == 0)
	{
		if (*bd >= BUFFER_SIZE - 2)
			buffer_checker(bf, bd, &tmp);
		else
		{
			bf[*bd] = '0';
			*bd++;
			return (*bd + tmp);
		}
	}
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
	{
		if (*bd >= BUFFER_SIZE - 2)
			buffer_checker(bf, bd, &tmp);
		else
		{
			bf[*bd] = str[c];
			*bd++;
		}
	}
	free(str);
	free(s);
	return (*bd + tmp);
}
/**
 * oct_print - prints octal numbers
 * @arguments: the received arguments
 * Return: the number of charcaters printed
 */
int oct_print(va_list arguments)
{
	unsigned int input, temp, length = 0;
	int a = 0, b, c, d, len, tmp = 0;
	char *s, *str;

	input = va_arg(arguments, unsigned int);
	temp = input;
	if (input == 0)
	{
		if (*bd >= BUFFER_SIZE - 2)
			buffer_checker(bf, bd, &tmp);
		else
		{
			bf[*bd] = '0';
			*bd++;
		}
		return (*bd + tmp);
	}
	while (temp > 0)
	{
		temp /= 8;
		a++;
	}
	s = malloc(sizeof(char) * a + 1);
	str = malloc(sizeof(char) * a + 1);
	if (s == NULL || str == NULL)
		return (-1);
	for (b = 0; input > 0; b++)
	{
		s[b] =  (input % 8) + 48;
		input /= 8;
	}
	s[b] = '\0';
	len = strlen(s);
	for (c = 0; c < len; c++)
		str[c] = s[len - c - 1];
	str[c] = '\0';
	for (d = 0; str[d] != '\0'; d++)
	{
		if (*bd >= BUFFER_SIZE - 2)
			buffer_checker(bf, bd, &tmp);
		else
		{
			bf[*bd] = str[d];
			*bd++;
		}
	}
	free(str);
	free(s);
	return (*bd + tmp);
}
/**
 * hex_print - prints hexadecimal of numbers
 * @arguments: the arguments passed to it from the variadic list
 * Return: the number of character
 */

int hex_print(va_list arguments)
{
	char hex[] = "abcdef", *s, *str;
	unsigned int number, rem, temp;
	int a = 0, b, c, d, len, length = 0, hex_val;

	number = va_arg(arguments, unsigned int);
	temp = number;
	if (number == 0)
		return (write_function('0'));
	while (temp > 0)
	{
		temp /= 16;
		a++;
	}
	s = malloc(sizeof(char) * a + 1);
	str = malloc(sizeof(char) * a + 1);
	if (s == NULL || str == NULL)
		return (-1);
	for (b = 0; number > 0; b++)
	{
		rem = number % 16;
		if (rem > 9)
		{
			hex_val = rem - 10;
			s[b] = hex[hex_val];
		}
		else
			s[b] = rem + 48;
		number /= 16;
	}
	s[b] = '\0';
	len = strlen(s);
	for (c = 0; c < len; c++)
		str[c] = s[len - c - 1];
	str[c] = '\0';
	for (d = 0; str[d] != '\0'; d++)
		length += write_function(str[d]);
	free(s);
	free(str);
	return (length);
}
/**
 * heX_print - prints capital hexadecimal
 * @arguments: the arguments to be passed
 * Return: the number of printed character
 */
int heX_print(va_list arguments)
{
	char hex[] = "ABCDEF", *s, *str;
	unsigned int number, rem, temp;
	int a = 0, b, c, d, len, length = 0, hex_val, tmp = 0;

	number = va_arg(arguments, unsigned int);
	if (number == 0)
	{
		if (*bd >= BUFFER_SIZE - 2)
			buffer_checker(bf, bd, &tmp);
		else
		{
			bf[*bd] = '0';
			*bd++;
		}
		return (*bd + tmp);
	}
	temp = number;
	while (temp > 0)
	{
		temp /= 16;
		a++;
	}
	s = malloc(sizeof(char) * a + 1);
	str = malloc(sizeof(char) * a + 1);
	if (s == NULL || str == NULL)
		return (-1);
	for (b = 0; number > 0; b++)
	{
		rem = number % 16;
		if (rem > 9)
		{
			hex_val = rem - 10;
			s[b] = hex[hex_val];
		}
		else
			s[b] = rem + 48;
		number /= 16;
	}
	s[b] = '\0';
	len = strlen(s);
	for (c = 0; c < len; c++)
		str[c] = s[len - c - 1];
	str[c] = '\0';
	for (d = 0; str[d] != '\0'; d++)
	{
		if (*bd >= BUFFER_SIZE - 2)
			buffer_size(bf, bd, 
	free(s);
	free(str);
	return (length);
}
