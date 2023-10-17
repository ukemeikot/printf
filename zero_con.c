#include "main.h"
/**
 * zero - helps print under zero condition
 * @bf: buffer
 * @bd: buffer index
 * @tmp: temporary holder
 *Return: sum
 */
int zero(char *bf, int *bd, int *tmp)
{

		if (*bd >= BUFFER_SIZE - 2)
			buffer_checker(bf, bd, tmp);
		else
		{
			bf[*bd++] = '0';
		}
		return (*bd + *tmp);
}
