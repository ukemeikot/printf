#include "main.h"
/**
 * write_function - this writes characters the standard output.
 * @bf: the character to be written to the standard output
 * @bd: buffer index
 * Return: returns the written character
 */

int write_function(char *bf, int *bd)
{
	return (write(1, bf, *bd));
}
