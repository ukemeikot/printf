#include "main.h"
/**
 * write_function - this writes characters the standard output.
 * @c: the character to be written to the standard output
 * Return: returns the written character
 */

int write_function(char c)
{
	return (write(1, &c, 1));
}
