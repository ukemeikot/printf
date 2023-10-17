#include "main.h"
/**
* buffer_checker - checks if buffer is full
*@b: the buffer
*@a: the buffer index
*@tmp: tempory storage
*Return: nothing
*/
void buffer_checker(char *b, int *a, int *tmp)
{
	write_function(b, a);
	*tmp = *a;
	*a = 0;
}
